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
int MCMF(int s,int t)
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
	// cout<<maxf<<" "<<-minc<<endl;
	return -minc;
}
map<string,int>mp;
map<int,string>rmp;
int a[N],b[N],ra[N],rb[N];
vector<int>v1,v2;
bitset<1000>bi;
int fl;
void find(int x,int fa,vector<int>&v)
{
	if(x==t){
		fl=1;
		return;
	}
	if(ra[x])x=b[ra[x]];
	if(!bi[rb[x]]&&!fl)v.push_back(rb[x]),bi[rb[x]]=1;
	for(int i=head[x];i;i=e[i].next){
		int to=e[i].to;
		int w=e[i].w;
		if(!w&&!bi[ra[to]])find(to,x,v);
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		mp[s]=i;
		rmp[i]=s;
	}
	s=++tot,t=++tot;
	for(int i=1;i<=n;i++){
		a[i]=++tot;
		ra[tot]=i;
		b[i]=++tot;
		rb[tot]=i;
		add_mc(a[i],b[i],1,-1);
	}
	for(int i=1;i<=m;i++){
		string x,y;
		cin>>x>>y;
		add_mc(b[mp[x]],a[mp[y]],1,0);
	}
	add_mc(a[1],b[1],1,0);
	add_mc(a[n],b[n],1,0);
	add_mc(s,a[1],2,0);
	add_mc(b[n],t,2,0);
	int ans=MCMF(s,t);
	if(!ans){
		cout<<"No Solution!"<<endl;
		return;
	}
	cout<<ans<<endl;
	find(a[1],s,v1);
	for(int x:v1)cout<<rmp[x]<<endl;
	fl=0;
	bi[1]=0;
	bi[n]=0;
	find(a[1],s,v2);
	for(int i=v2.size()-2;i>=0;i--)cout<<rmp[v2[i]]<<endl;
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}