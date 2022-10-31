#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,k,a,b,c;
struct poi
{
	int id,num;
	friend bool operator<(poi a,poi b){
		return a.num>b.num;
	}
};
struct Edge
{
	int to,next,w;
}e[N];
struct PP
{
	int x,y,nu;
}rid[N];
int head[N],cnt,tot;
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
int s[103][103][12];
int id[103][103][12],mp[103][103];
int dis[N];
int vis[N];
void dij()
{
	priority_queue<poi>q;
	for(int i=1;i<=id[n][n][k];i++)dis[i]=INF;
	q.push({id[1][1][k],0});
	dis[id[1][1][k]]=0;
	while(q.size()){
		auto[id,num]=q.top();
		q.pop();
		if(vis[id])continue;
		vis[id]=1;
		// cout<<id<<" "<<num<<endl;
		for(int i=head[id];i;i=e[i].next){
			int to=e[i].to;
			int w=e[i].w;
			if(dis[to]>dis[id]+w){
				dis[to]=dis[id]+w;
				q.push({to,dis[to]});
			}
		}
	}
}
void solve()
{
	cin>>n>>k>>a>>b>>c;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int nu=0;nu<=k;nu++){
				id[i][j][nu]=++tot;
				// rid[tot]={i,j,nu};
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>mp[i][j];
			for(int nu=0;nu<=k;nu++){
				if(mp[i][j])add(id[i][j][nu],id[i][j][k],a);
				else add(id[i][j][nu],id[i][j][k],c+a);
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int nu=1;nu<=k;nu++){
				if(mp[i][j])nu=k;
				if(i!=1)add(id[i][j][nu],id[i-1][j][nu-1],b);
				if(j!=1)add(id[i][j][nu],id[i][j-1][nu-1],b);
				if(i!=n)add(id[i][j][nu],id[i+1][j][nu-1],0);
				if(j!=n)add(id[i][j][nu],id[i][j+1][nu-1],0);
			}
		}
	}
	dij();
	int ans=INF;
	for(int i=0;i<=k;i++)ans=min(ans,dis[id[n][n][i]]);
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