/*
注意！
由于存在有两个竖着的线段x是相等的，所以在判断上存在两个线段不在一起
但是其实是在一起的，所以可以进行扩域
把点变成线，这样子就能判断了，然后需要修正不相等的值，使得连在一起但不重合的，恢复正常（l*2+1,r*2即可）
*/
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
	int to,next,w;
	int c;
}e[N];
int head[N],cnt=1,tot;
int dis[N];
int flow[N],last[N];
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
	int maxf=0;
	int minc=0;
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
struct poi
{
	int l,r,dist;
}le[N];
int k;
int a[N],b[N];
void solve()
{
	cin>>n>>k;
	int ss=++tot;
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++)a[i]=++tot,b[i]=++tot;
	for(int i=1;i<=n;i++){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1>x2)swap(x1,x2),swap(y1,y2);
		// le[i].dist=hypot(x1-x2,y1-y2);
        le[i].dist=sqrtl((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		le[i].l=x1*2;
		le[i].r=x2*2;
        if(x1==x2)le[i].r+=1;
        else le[i].l+=1;
	}
	add_mc(s,ss,k,0);
	for(int i=1;i<=n;i++){
		add_mc(ss,a[i],1,0);
		add_mc(a[i],b[i],1,-le[i].dist);
		add_mc(b[i],t,1,0);
	}
	for(int i=1;i<=n;i++){
		auto[l1,r1,dis1]=le[i];
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			auto[l2,r2,dis2]=le[j];
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