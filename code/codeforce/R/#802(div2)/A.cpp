#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
    int n,m;
    cin>>n>>m;
    int ans=0;
    ans+=(1+m-1)*(m-1)/2;
    ans+=(m+n*m)*n/2;
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}