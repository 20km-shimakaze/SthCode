#include<bits/stdc++.h>
using namespace std;
#define int long long
int dp[1000060][11],n;
void solve()
{
    cin>>n;
    for(int i=0;i<=9;i++)dp[1][i]=1;
    for(int i=2;i<=n;i++){
        for(int j=2;j<=8;j++){
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j+1]+dp[i-1][j];
            dp[i][j]%=998244353;
        }
        dp[i][1]=dp[i-1][1]+dp[i-1][2];
        dp[i][9]=dp[i-1][9]+dp[i-1][8];
    }
    int ans=0;
    for(int i=0;i<=9;i++){
        ans+=dp[n][i];
        ans%=998244353;
    }
    cout<<ans<<endl;
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)solve();
}