#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
map<int,int>mp;
int dfs(int x)
{
	if(x==0)return 1;
	if(mp.count(x))return mp[x];
	return mp[x]=dfs(x/2)+dfs(x/3);
}
void solve()
{
	int x;cin>>x;
	cout<<dfs(x)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}