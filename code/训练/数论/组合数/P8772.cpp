#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int sum=0,n;
	cin>>n;
	vector<int>a(n);
	for(int &x:a)cin>>x,sum+=x;
	int ans=0;
	for(int x:a)ans+=(sum-x)*x;
	cout<<ans/2<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}