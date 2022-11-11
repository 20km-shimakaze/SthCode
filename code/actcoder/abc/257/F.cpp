#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int f[N],g[N];
int n,m;
vector<int>v[N];
int vis[N];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(f,0x3f,sizeof(int)*(n+1));
	memset(g,0x3f,sizeof(int)*(n+1));
	memset(vis,0,sizeof(int)*(n+1));
	queue<P>q;// id,step
	q.push({1,0});
	while(q.size()){
		auto[id,step]=q.front();
		q.pop();
		if(vis[id])continue;
		f[id]=step;
		vis[id]=1;
		for(int y:v[id]){
			q.push({y,step+1});
		}
	}
	memset(vis,0,sizeof(int)*(n+1));
	q.push({n,0});
	while(q.size()){
		auto[id,step]=q.front();
		q.pop();
		if(vis[id])continue;
		g[id]=step;
		vis[id]=1;
		for(int y:v[id]){
			q.push({y,step+1});
		}
	}
	for(int i=1;i<=n;i++){
		int an=min({f[n],f[0]+g[i],f[i]+g[0]});
		if(an>=INF)cout<<-1<<" ";
		else cout<<an<<" ";
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