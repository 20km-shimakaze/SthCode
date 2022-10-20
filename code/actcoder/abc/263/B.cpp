#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N];
int n;
vector<int>v[N];
void dfs(int x,int dep)
{
	if(x==n){
		cout<<dep<<endl;
		return;
	}
	for(auto ne:v[x]){
		dfs(ne,dep+1);
	}
}
void solve()
{
	cin>>n;
	for(int i=2;i<=n;i++)cin>>a[i],v[a[i]].push_back(i);
	dfs(1,0);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}