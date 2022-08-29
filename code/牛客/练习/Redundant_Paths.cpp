#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt=1,idx,low[N],dfn[N],col[N],w[N],num;
int vie[N];
stack<int>st;
struct Edge
{
    int to,next;
}e[N];
bitset<N>vis;
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
map<P,int>mp;
void tarjan(int x,int fa)
{
    dfn[x]=low[x]=++idx;
    st.push(x);
    vis[x]=1;
    for(int i=head[x];i;i=e[i].next){
        int y=e[i].to;
        if(!dfn[y]){
            tarjan(y,i);
            low[x]=min(low[x],low[y]);
        }
        else if(i!=(fa^1)&&vis[y]&&dfn[y]<dfn[x])low[x]=min(low[x],dfn[y]);
    }
    if(dfn[x]==low[x]){
        int y;
        num++;
        do{
            y=st.top();
            st.pop();
            col[y]=num;
            vis[y]=0;
        }while(x!=y);
    }
}
int in[N],ou[N];
vector<int>v[N];
void solve()
{
	int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }
    tarjan(1,0);
    mp.clear();
    for(int x=1;x<=n;x++){
        for(int i=head[x];i;i=e[i].next){
            int y=e[i].to;
            int cx=col[x];
            int cy=col[y];
            if(cx!=cy)in[cy]++;
        }
    }
    int ans=0; 
    for(int i=1;i<=num;i++){
        if(in[i]==1)ans++;
    }
    //cout<<ans<<endl;
    cout<<(ans+1)/2<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}