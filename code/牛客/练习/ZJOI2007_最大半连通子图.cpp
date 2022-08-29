#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
int mod=998244353;
int head[N],cnt,low[N],dfn[N],idx,num,col[N],w[N],in[N];
struct Edge
{
    int to,next;
}e[N];
stack<int>st;
bitset<N>vis;
int n,m;
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
int f[N],g[N];
void tarjan(int x)
{
    low[x]=dfn[x]=++idx;
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
        num++;
        int y;
        do{
            y=st.top();
            st.pop();
            col[y]=num;
            w[num]++;
            vis[y]=0;
        }while(x!=y);
    }
}
vector<int>v[N];
void solve()
{
	cin>>n>>m>>mod;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        add(x,y);
    }
    for(int i=1;i<=n;i++){
        if(!dfn[i])tarjan(i);
    }
    map<P,int>mp;
    for(int x=1;x<=n;x++){
        for(int i=head[x];i;i=e[i].next){
            int y=e[i].to;
            if(col[x]!=col[y]&&!mp[{col[x],col[y]}])v[col[x]].push_back(col[y]),in[col[y]]++,mp[{col[x],col[y]}]=1;
        }
    }
    queue<int>q;
    for(int i=1;i<=num;i++){
        if(!in[i])q.push(i),f[i]=w[i],g[i]=1;
    }
    int an1=0,an2=0;
    while(q.size()){
        int x=q.front();
        q.pop();
        for(int y:v[x]){
            //f[y]=max(f[y],f[x]+w[y]);
            if(f[y]<f[x]+w[y]){
                f[y]=f[x]+w[y];
                g[y]=0;
            }
            if(f[y]==f[x]+w[y])g[y]=(g[y]+g[x])%mod;
            // if(an1<f[y]){
            //     an1=f[y];
            //     an2=0;
            // }
            // if(an1==f[y])an2+=g[y];
            in[y]--;
            if(!in[y])q.push(y);
        }
        an1=max(an1,f[x]);
    }
    // for(int i=1;i<=n;i++)cout<<col[i]<<" ";puts("");
    // for(int i=1;i<=num;i++)cout<<f[i]<<" ";puts("");
    // for(int i=1;i<=num;i++)cout<<g[i]<<" ";puts("");
    an2=0;
    for(int i=1;i<=num;i++)if(an1==f[i])an2+=g[i],an2%=mod;
    cout<<an1<<endl<<an2<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}