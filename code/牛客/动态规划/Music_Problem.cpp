#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
int dp[4000],t[4000];
const int mod=3600;
void solve()
{
    cin>>n;
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=n;i++)scanf("%d",&a[i]),a[i]%=mod;
    if(n>3600){
        puts("YES");
        return;
    }
    dp[a[1]]=1;
    for(int i=2;i<=n;i++){
        for(int j=0;j<=3600;j++)t[j]=dp[j];
        for(int j=0;j<3600;j++){
            dp[(j+a[i])%mod]|=t[j];
            dp[a[i]]=1;
        }
    }
    if(dp[0])puts("YES");
    else puts("NO");
}
int main()
{
    int __;
    cin>>__;
    while(__--)solve();
}