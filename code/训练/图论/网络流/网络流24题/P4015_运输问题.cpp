#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct node{
	int to,next,w,c;
}edge[N];
int head[N],cnt=1,tot;
int dis[N],flow[N],last[N];
bitset<N>vis;
int n,m,s,t;
void init(){
	memset(head+1,0,sizeof(int)*tot);
	cnt=1;
	tot=0;
}
void add(int from,int to,int w,int c)
{
	edge[++cnt].w=w;
	edge[cnt].c=c;
	edge[cnt].to=to;
	edge[cnt].next=head[from];
	head[from]=cnt;
}
bool spfa(int s,int t)
{
	memset(dis+1,0x3f,sizeof(int)*tot);
	memset(last+1,-1,sizeof(int)*tot);
	vis.reset();
	queue<int>q;
	q.push(s);
	dis[s]=0;
	vis[s]=1;
	flow[s]=INF;
	while(!q.empty())
	{
		int x=q.front();q.pop();
		vis[x]=0;
		for(int i=head[x];i;i=edge[i].next)
		{
			int y=edge[i].to;
			int w=edge[i].w;
			int c=edge[i].c;
			if(w>0&&dis[y]>dis[x]+c)
			{
				dis[y]=dis[x]+c;
				last[y]=i;
				flow[y]=min(flow[x],w);
				if(!vis[y])
					q.push(y),vis[y]=1;
			}
		}
	}
	return last[t]!=-1;
}
int MCMF(int s,int t)
{
	int maxf=0,minc=0;
	while(spfa(s,t))
	{
		maxf+=flow[t];
		minc+=flow[t]*dis[t];
		for(int i=t;i!=s;i=edge[last[i]^1].to)
		{
			edge[last[i]].w-=flow[t];
			edge[last[i]^1].w+=flow[t];
		}
	}
	return minc;
}
void add_mcmf(int x,int y,int w,int c,int rw=0)
{
	add(x,y,w,c);
	add(y,x,rw,-c);
}
int aa[N],bb[N],a[N],b[N],mp[103][103];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>aa[i];
	for(int i=1;i<=m;i++)cin>>bb[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>mp[i][j];
		}
	}
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++)a[i]=++tot;
	for(int i=1;i<=m;i++)b[i]=++tot;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			add_mcmf(a[i],b[j],INF,mp[i][j]);
		}
	}
	for(int i=1;i<=n;i++)add_mcmf(s,a[i],aa[i],0);
	for(int i=1;i<=m;i++)add_mcmf(b[i],t,bb[i],0);
	cout<<MCMF(s,t)<<endl;
	init();
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++)a[i]=++tot;
	for(int i=1;i<=m;i++)b[i]=++tot;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			add_mcmf(a[i],b[j],INF,-mp[i][j]);
		}
	}
	for(int i=1;i<=n;i++)add_mcmf(s,a[i],aa[i],0);
	for(int i=1;i<=m;i++)add_mcmf(b[i],t,bb[i],0);
	cout<<-MCMF(s,t)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}