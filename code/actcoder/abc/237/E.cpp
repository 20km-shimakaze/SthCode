#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int INF=1e18;
struct poi{int a,b;};
vector<poi>v[200005];
int h[200005];
int n,m;
int dis[200005],vis[200005];
struct node
{
    int id,dis;
    friend bool operator < (node a,node b){
        return a.dis<b.dis;
    }
};
void dij()
{
    priority_queue<node>q;
    q.push(node{1,0});
    for(int i=1;i<=n;i++){
        dis[i]=INF;
    }
    dis[1]=0;
    while(!q.empty()){
        node a=q.top();
        q.pop();
        int now=a.id;
        if(vis[now])continue;
        vis[now]=1;
        for(int i=0;i<v[now].size();i++){
            int j=v[now][i].a;
            int di=v[now][i].b;
            if(dis[now]+di<dis[j]){
                dis[j]=dis[now]+di;
                q.push(node{j,dis[j]});
            }
        }
    }
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>h[i];
	for(int i=1;i<=m;i++){
		int u,vv;
		cin>>u>>vv;
		if(h[u]>h[vv]){
			v[u].push_back({vv,0});
			v[vv].push_back({u,h[u]-h[vv]});
		}
		else{
			v[u].push_back({vv,h[vv]-h[u]});
			v[vv].push_back({u,0});
		}
	}
	dij();
	int ans=0;
	for(int i=2;i<=n;i++){
		if(dis[i]==INF)continue;
		ans=max(ans,h[1]-h[i]-dis[i]);
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