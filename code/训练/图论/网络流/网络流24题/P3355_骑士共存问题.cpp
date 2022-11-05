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
int a[303][303];
int mp[303][303];
int dx[8]={1,1,2,2,-1,-1,-2,-2};
int dy[8]={2,-2,1,-1,2,-2,1,-1};
int OK(int x,int y)
{
	return x>=1&&y>=1&&x<=n&&y<=n;
}
void solve()
{
	cin>>n>>m;
	s=++tot;
	t=++tot;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			a[i][j]=++tot;
		}
	}
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		mp[x][y]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(mp[i][j])continue;
			if((i+j)&1)add_ed(s,a[i][j],1);
			else add_ed(a[i][j],t,1);
			if(((i+j)&1)==0)continue;
			for(int k=0;k<8;k++){
				int xx=i+dx[k];
				int yy=j+dy[k];
				if(!OK(xx,yy)&&!mp[xx][yy])continue;
				add_ed(a[i][j],a[xx][yy],INF);
			}
		}
	}
	cout<<n*n-DINIC(s,t)-m<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}