#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
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
int a[N],b[N],ra[N],rb[N];
int r[N],c[N];
void add_ed(int x,int y,int w,int rw=0)
{
	add(x,y,w);
	add(y,x,rw);
}
void solve()
{
	cin>>m>>n;
	s=++tot;
	t=++tot;
	int sum=0;
	for(int i=1;i<=m;i++)a[i]=++tot;
	for(int i=1;i<=n;i++)b[i]=++tot,rb[tot]=i;
	for(int i=1;i<=m;i++)cin>>r[i],sum+=r[i];
	for(int i=1;i<=n;i++)cin>>c[i];
	for(int i=1;i<=m;i++)add_ed(s,a[i],r[i]);
	for(int i=1;i<=n;i++)add_ed(b[i],t,c[i]);
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			add_ed(a[i],b[j],1);
		}
	}
	int ans=DINIC(s,t);
	if(ans!=sum){
		cout<<0<<endl;
		return;
	}
	else cout<<1<<endl;
	for(int i=1;i<=m;i++){
		int x=a[i];
		for(int j=head[x];j;j=e[j].next){
			int y=e[j].to;
			int w=e[j].w;
			if(!w){
				cout<<rb[y]<<" ";
			}
			// cout<<i<<" "<<rb[y]<<" "<<w<<endl;
		}
		cout<<endl;
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