#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+40000;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m;
struct Edge
{
    int to,next,w;
}e[N];
int head[N],cnt=1;
void add(int from,int to,int w)
{
    e[++cnt].w=w;
    e[cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
int dep[N];
int tot;
void init()
{
    cnt=1;
    memset(head+1,0,sizeof(int)*n);
}
bool bfs(int s,int t)
{
	memset(dep+1,0,sizeof(int)*tot);
	queue<int>q;
	dep[s]=1;
	q.push(s);
	while(!q.empty())
	{
		int x=q.front();q.pop();
		if(x==t)return true;
		for(int i=head[x];i;i=e[i].next)
		{
			int y=e[i].to;
			int w=e[i].w;
			if(dep[y]==0&&w>0)
				q.push(y),dep[y]=dep[x]+1;
		}
	}
	return false;
}
int dfs(int x,int flow,int t)
{
	if(x==t)return flow;
	int out=flow;
	for(int i=head[x];i;i=e[i].next)
	{
		int y=e[i].to;
		int w=e[i].w;
		if(w!=0&&dep[y]==dep[x]+1)
		{
			int tmp=dfs(y,min(out,w),t);
			e[i].w-=tmp;
			e[i^1].w+=tmp;
			out-=tmp;
			if(!out)break;
		}
	}
	if(out==flow)dep[x]=0;
	return flow-out;
}
int DINIC(int s,int t)
{
	int ans=0;
	while(bfs(s,t))
		ans+=dfs(s,INF,t);
	return ans;
}
int a[N],b[N];
void solve()
{
    cin>>n>>m;
    int s=++tot;
    int t=++tot;
    for(int i=1;i<=n;i++){
        a[i]=++tot;
        add(s,a[i],1);
        add(a[i],s,0);
    }
    for(int i=1;i<=m;i++){
        b[i]=++tot;
        add(b[i],t,1);
        add(t,b[i],0);
    }
    for(int i=1;i<=n;i++){
        int num;cin>>num;
        for(int j=1;j<=num;j++){
            int x;cin>>x;
            add(a[i],b[x],1);
            add(b[x],a[i],0);
        }
    }
    int ans=DINIC(s,t);
    cout<<m-ans<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}