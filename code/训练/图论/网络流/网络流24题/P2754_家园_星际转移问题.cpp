#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
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
void add_ed(int x,int y,int w,int rw=0)
{
	add(x,y,w);
	add(y,x,rw);
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
int a[100000][70],k,peo[N];
vector<int>sp[N];
void solve()
{
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++){
		cin>>peo[i];
		int num;
		cin>>num;
		for(int j=1;j<=num;j++){
			int x;cin>>x;
			if(x==-1)x=n+1;
			sp[i].push_back(x);
		}
	}
	int ans=0;
	int day=0;
	s=++tot;
	t=++tot;
	for(int i=0;i<=n+1;i++)a[0][i]=++tot;
	add_ed(s,a[0][0],k);
	add_ed(a[0][n+1],t,INF);
	int ddd=1000;
	while(ddd--){
		for(int i=0;i<=n+1;i++)a[day+1][i]=++tot;
		add_ed(a[day+1][n+1],t,INF);
		for(int i=0;i<=n;i++)add_ed(a[day][i],a[day+1][i],INF);
		for(int i=1;i<=m;i++){
			int dis=day%(int)sp[i].size();
			int x=sp[i][dis];
			int y=sp[i][(dis+1)%(int)sp[i].size()];
			add_ed(a[day][x],a[day+1][y],peo[i]);
			// if(i==1)cout<<"day="<<day<<" "<<"sp="<<i<<" "<<x<<" "<<y<<endl;
		}
		ans+=DINIC(s,t);
		if(ans==k){
			cout<<day+1<<endl;
			return;
		}
		day++;
		// cout<<ans<<endl;
	}
	cout<<0<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}