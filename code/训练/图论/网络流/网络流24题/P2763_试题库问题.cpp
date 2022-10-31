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
int a[N],b[N],k,ra[N],rb[N];
void solve()
{
	cin>>k>>n;
	s=++tot;
	t=++tot;
	for(int i=1;i<=k;i++)b[i]=++tot,rb[tot]=i;
	for(int i=1;i<=n;i++)a[i]=++tot,ra[tot]=i;
	for(int i=1;i<=k;i++){
		int x;cin>>x;
		add_ed(b[i],t,x);
	}
	for(int i=1;i<=n;i++){
		add_ed(s,a[i],1);
		int q;cin>>q;
		for(int j=1;j<=q;j++){
			int x;cin>>x;
			add_ed(a[i],b[x],1);
		}
	}
	cout<<DINIC(s,t)<<endl;
	for(int i=1;i<=k;i++){
		cout<<i<<": ";
		for(int j=head[b[i]];j;j=e[j].next){
			int y=e[j].to;
			int w=e[j].w;
			// cout<<y<<" "<<w<<endl;
			if(y==t)continue;
			if(w==1)cout<<ra[y]<<" ";
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