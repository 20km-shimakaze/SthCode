#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m;
vector<int>v[N];
int ans;
int vis[N];
void dfs(int x,int fa)
{
	if(ans>=1e6)return;
	ans++;
	for(int y:v[x]){
		if(y==fa||vis[y])continue;
		vis[y]=1;
		dfs(y,x);
		vis[y]=0;
	}
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	vis[1]=1;
	dfs(1,0);
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