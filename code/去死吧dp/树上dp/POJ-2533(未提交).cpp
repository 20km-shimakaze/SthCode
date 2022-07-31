//https://vjudge.net/problem/POJ-2533#author=jxust_szh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int dp[5003];//以i结尾的最长子序列
int a[1003];
void solve()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        dp[i]=1;
        for(int j=1;j<=n;j++){
            if(a[i]>a[j]){//如果i已经比j大，那么就可以将a[i]放在a[j]后，使得长度+1
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i]);//查找所有以a[i]结尾的答案
    }
    cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}