#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	int an=0;
	for(int l=1,r;l<=n;l=r+1){
		r=n/(n/l);
		an+=n/l*(r-l+1);
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