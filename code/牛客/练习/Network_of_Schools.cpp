#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int head[N],cnt,low[N],dfn[N],idx,w[N];
struct Edge
{
    int to,next;
}e[N];
int n;
void add(int from,int to)
{
    e[++cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
bitset<N>vis;
int in[N],col[N],num,ou[N];
stack<int>st;
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
        int y;
        num++;
        do{
            y=st.top();
            st.pop();
            vis[y]=0;
            col[y]=num;
        }while(x!=y);
    }
}
vector<int>v[N];
map<P,int>mp;
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        int y;
        while(cin>>y,y){
            add(i,y);
            in[y]++;
        }
    }
    int ans=0;
    int an1=0,an2=0;
    for(int i=1;i<=n;i++){
        if(!in[i])an1++;
        if(!dfn[i])tarjan(i),ans++;
    }
    for(int x=1;x<=n;x++){
        for(int i=head[x];i;i=e[i].next){
            int y=e[i].to;
            int cx=col[x],cy=col[y];
            if(cx!=cy&&!mp[{cx,cy}]){
                v[cx].push_back(cy);
                mp[{cx,cy}]=1;
            }
        }
    }
    for(int i=1;i<=num;i++)in[i]=0;
    for(int x=1;x<=num;x++){
        for(int y:v[x]){
            in[y]++;
            ou[x]++;
        }
    }
    an1=0;
    for(int i=1;i<=num;i++){
        if(!in[i])an1++;
        if(!ou[i])an2++;
    }
    if(num==1){
        cout<<1<<endl<<0<<endl;
    }
    else cout<<an1<<endl<<max(an1,an2)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}