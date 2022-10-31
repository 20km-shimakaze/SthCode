#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int x[N],dp[N];
struct Edge{
	int to,next,w;
}e[N];
int head[N],cnt=1,tot;
int dep[N];
int n,m,s,t;
void init(){
	cnt=1;
	memset(head+1,0,sizeof(int)*tot);
}
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
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
void add_ed(int x,int y,int w,int rw=0)
{
	add(x,y,w);
	add(y,x,rw);
}
int a[N],b[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>x[i];
	int ans1=0;
	for(int i=n;i>=1;i--){
		dp[i]=1;
		for(int j=i+1;j<=n;j++){
			if(x[i]<=x[j])dp[i]=max(dp[i],dp[j]+1);
		}
		ans1=max(ans1,dp[i]);
	}
	cout<<ans1<<endl;
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++)a[i]=++tot,b[i]=++tot;
	for(int i=1;i<=n;i++){
		add_ed(a[i],b[i],1);
		if(dp[i]==ans1)add_ed(s,a[i],1);
		if(dp[i]==1)add_ed(b[i],t,1);
		for(int j=i+1;j<=n;j++){
			if(dp[i]==dp[j]+1&&x[i]<=x[j])add_ed(b[i],a[j],1);
		}
	}
	int ans2=DINIC(s,t);
	cout<<ans2<<endl;
	add_ed(a[1],b[1],INF);
	add_ed(a[n],b[n],INF);
	if(n!=1)if(dp[n]==1)add_ed(b[n],t,INF);
	if(dp[1]==ans1)add_ed(s,a[1],INF);
	
	cout<<ans2+DINIC(s,t)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}