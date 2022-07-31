#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,a[200];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l=1,r=n;
    while(a[l]==1)l++;
    while(a[r]==1)r--;
    l--,r++;
    if(l>=r)cout<<0<<endl;
    else cout<<r-l<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}