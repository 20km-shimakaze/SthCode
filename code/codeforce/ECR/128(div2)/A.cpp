#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1>=l2&&r2>=l1)cout<<max(l1,l2)<<endl;
    else cout<<l1+l2<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}