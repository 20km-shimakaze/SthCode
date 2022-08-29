#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt;
struct Edge
{
    int to,next;
}e[N];
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
int n,m;
int low[N],dfn[N],ans,idx,col[N];
bitset<N>vis;
stack<int>st;
int w[N],in[N];
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
    if(low[x]==dfn[x]){
        ans++;
        int y;
        do{
            y=st.top();
            st.pop();
            col[y]=ans;
            w[ans]++;
            vis[y]=0;
        }while(x!=y);
    }
}
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        add(x,y);
    }
    for(int i=1;i<=n;i++){
        if(!dfn[i])tarjan(i);
    }
    int num=0,cl;
    for(int x=1;x<=n;x++){
        for(int i=head[x];i;i=e[i].next){
            int y=e[i].to;
            if(col[x]!=col[y])in[col[x]]++;
        }
    }
    for(int i=1;i<=ans;i++){
        if(!in[i]){
            num++;
            cl=i;
        }
    }
    if(num>=2)cout<<0<<endl;
    else cout<<w[cl]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}