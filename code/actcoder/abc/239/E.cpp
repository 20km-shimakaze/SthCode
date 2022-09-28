#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
// #define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,q;
vector<int>v[N],s[N];
int xx[N];
void dfs(int x,int fa)
{
	s[x].push_back(xx[x]);
	for(int y:v[x]){
		if(y==fa)continue;
		dfs(y,x);
		// for(int di:s[y])s[x].push_back(di);
		for(int i=0;i<min(20,(int)s[y].size());i++)s[x].push_back(s[y][i]);
	}
	sort(s[x].begin(),s[x].end(),[&](int a,int b){
		return a>b;
	});
}
void solve()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++)cin>>xx[i];
	for(int i=1;i<n;i++){
		int xx,yy;
		cin>>xx>>yy;
		v[xx].push_back(yy);
		v[yy].push_back(xx);
	}
	dfs(1,0);
	while(q--){
		int a,b;
		cin>>a>>b;
		cout<<s[a][b-1]<<'\n';
	}
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}