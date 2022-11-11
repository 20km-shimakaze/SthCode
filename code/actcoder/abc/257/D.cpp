#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct Edge
{
	int to,next,w;
}e[N];
int head[N],cnt;
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
struct node
{
	int id,dis;
	friend bool operator<(node a,node b){
		return a.dis>b.dis;
	}
};
int dis[N];
struct poi
{
	int x,y,p;
}mp[N];
int n;
int vis[N];
void dij(int fis)
{
	memset(dis,0x3f,sizeof(int)*(n+1));
	memset(vis,0,sizeof(int)*(n+1));
	dis[fis]=0;
	priority_queue<node>q;
	q.push({fis,0});
	while(q.size()){
		auto[id,diss]=q.top();
		q.pop();
		if(vis[id])continue;
		vis[id]=1;
		for(int i=head[id];i;i=e[i].next){
			int to=e[i].to;
			int w=e[i].w;
			if(dis[to]>w){
				dis[to]=max(w,dis[id]);
				q.push({to,max(w,dis[id])});
			}
		}
	}
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>mp[i].x>>mp[i].y>>mp[i].p;
	}
	for(int i=1;i<=n;i++){
		auto[x1,y1,p1]=mp[i];
		for(int j=1;j<=n;j++){
			auto[x2,y2,p2]=mp[j];
			if(i==j)continue;
			int dis=abs(x1-x2)+abs(y1-y2);
			add(i,j,(dis+p1-1)/p1);
			// cout<<i<<" "<<j<<" "<<(dis+p1-1)/p1<<endl;
		}
	}
	int ans=INF;
	for(int i=1;i<=n;i++){
		dij(i);
		int ta=0;
		for(int j=1;j<=n;j++){
			ta=max(ta,dis[j]);
		}
		// cout<<ta<<endl;
		ans=min(ans,ta);
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}