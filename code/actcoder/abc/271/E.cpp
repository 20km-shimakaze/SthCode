#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m,k;
struct poi
{
	int x,y,w;
}s[N];
vector<poi>v[N];
int dis[N];
void solve()
{
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)dis[i]=INF;
	for(int i=1;i<=m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		s[i]={x,y,w};
	}
	dis[1]=0;
	for(int i=1;i<=k;i++){
		int o;
		cin>>o;
		auto [x,y,w]=s[o];
		dis[y]=min(dis[y],dis[x]+w);
	}
	if(dis[n]==INF)cout<<-1<<endl;
	else cout<<dis[n]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}