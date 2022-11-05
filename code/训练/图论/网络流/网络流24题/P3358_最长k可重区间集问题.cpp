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
}e[N];
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
	e[++cnt].w=w;
	e[cnt].c=c;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
void add_mc(int x,int y,int w,int c,int rw=0)
{
	add(x,y,w,c);
	add(y,x,rw,-c);
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
		for(int i=head[x];i;i=e[i].next)
		{
			int y=e[i].to;
			int w=e[i].w;
			int c=e[i].c;
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
void MCMF(int s,int t)
{
	int maxf=0,minc=0;
	while(spfa(s,t))
	{
		maxf+=flow[t];
		minc+=flow[t]*dis[t];
		for(int i=t;i!=s;i=e[last[i]^1].to)
		{
			e[last[i]].w-=flow[t];
			e[last[i]^1].w+=flow[t];
		}
	}
	cout<<-minc<<endl;
}
int k;
P le[N];
int a[N],b[N];
void solve()
{
	cin>>n>>k;
	int ss=++tot;
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++)cin>>le[i].first>>le[i].second,a[i]=++tot,b[i]=++tot;
	add_mc(s,ss,k,0);
	for(int i=1;i<=n;i++){
		add_mc(ss,a[i],1,0);
		add_mc(a[i],b[i],1,-(le[i].second-le[i].first));
		add_mc(b[i],t,1,0);
	}
	for(int i=1;i<=n;i++){
		auto[l1,r1]=le[i];
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			auto[l2,r2]=le[j];
			if(r1<=l2)add_mc(b[i],a[j],1,0);
		}
	}
	MCMF(s,t);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}