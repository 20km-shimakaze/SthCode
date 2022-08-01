#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int INF=4557430888798830399;
int n,a[100005],dp[100005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+1+n);
    dp[1]=a[1];
    dp[2]=a[2];
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+a[1]+a[i],dp[i-2]+a[i]+a[2]+a[2]+a[1]);
    }
    cout<<dp[n]<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}