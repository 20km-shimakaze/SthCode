#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt,low[N],dfn[N],idx,col[N],bcc,n,m;
struct Edge
{
    int to,next;
}e[N];
bitset<N>vis;
stack<int>st;
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
void tarjan(int x)
{
    dfn[x]=low[x]=++idx;
    vis[x]=1;
    st.push(x);
    for(int i=head[x];i;i=e[i].next){
        int y=e[i].to;
        if(!dfn[y]){
            tarjan(y);
            low[x]=min(low[x],low[y]);
        }
        else if(vis[y])low[x]=min(low[x],dfn[y]);
    }
    if(dfn[x]==low[x]){
        int y;
        bcc++;
        do{
            y=st.top();
            st.pop();
            vis[y]=0;
        }while(x!=y);
    }
}
void solve()
{
	while(cin>>n>>m,n||m){
        for(int i=1;i<=n;i++){
            dfn[i]=low[i]=head[i]=0;
        }
        idx=cnt=bcc=0;
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            add(x,y);
        }
        for(int i=1;i<=n;i++){
            if(!dfn[i])tarjan(i);
        }
        if(bcc==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}