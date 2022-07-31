/*
排序贪心计算两边之和
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a[200005];
int n;
void solve()
{
	ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i ++ )
        cin >> a[i];
    sort(a, a + n);
 
    ll ans = 0, cnt = 0;
 
    ll l = 1, r = n - 1;
    cnt += a[0];
    while(l < r)
    {
        cnt += a[l ++];
        ans += a[r --];
        if(ans > cnt)
        {
            cout << "YES" << '\n';
            return ;
        }
    }
 
    cout << "NO" << '\n';
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}