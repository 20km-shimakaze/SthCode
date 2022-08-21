#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,m;
void solve()
{
	cin>>n>>m;
    int ans=0;
    ans+=2*min(n,m)+max(n,m)-2;
    if(n==1&m==1)ans=0;
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}