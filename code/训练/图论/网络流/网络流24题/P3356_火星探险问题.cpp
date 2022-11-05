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
	// cout<<maxf<<" "<<-minc<<endl;
}
int a[40][40],b[40][40],mp[40][40];
P rb[N],ra[N];
int ss,p,q,num;
int flag=0;
void F(int idx,int name,int fa)
{
	if(flag)return;
	auto[x,y]=rb[idx];
	if(x==n&&y==m){
		flag=1;
		return;
	}
	if(x){// B
		for(int i=head[idx];i;i=e[i].next){
			int to=e[i].to;
			int w=e[i^1].w;
			if(to==fa)continue;
			if(!w||flag)continue;
			cout<<name<<" ";
			auto[xx,yy]=ra[to];
			if(xx==x)cout<<1<<endl;
			else if(yy==y) cout<<0<<endl;
			else cout<<"T_T"<<endl;
			e[i^1].w-=1;
			F(to,name,idx);
		}
	}
	else{// A
		for(int i=head[idx];i;i=e[i].next){
			int to=e[i].to;
			int w=e[i^1].w;
			if(to==fa)continue;
			if(!w||flag)continue;
			F(to,name,idx);
		}
	}
}
void solve()
{
	cin>>num>>m>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=++tot;
			ra[tot]={i,j};
			b[i][j]=++tot;
			rb[tot]={i,j};
			cin>>mp[i][j];
		}
	}
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i!=n&&mp[i+1][j]!=1)add_mc(b[i][j],a[i+1][j],INF,0);
			if(j!=m&&mp[i][j+1]!=1)add_mc(b[i][j],a[i][j+1],INF,0);
			if(mp[i][j]==2)add_mc(a[i][j],b[i][j],1,-1),add_mc(a[i][j],b[i][j],INF,0);
			if(mp[i][j]==0)add_mc(a[i][j],b[i][j],INF,0);
		}
	}
	add_mc(s,a[1][1],num,0);
	add_mc(b[n][m],t,INF,0);
	MCMF(s,t);
	for(int i=1;i<=num;i++)flag=0,F(a[1][1],i,s);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}