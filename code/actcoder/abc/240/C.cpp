#include<bits/stdc++.h>
using namespace std;
int n,dp[100005];
int a,x,b;
void solve()
{
    cin>>n>>x;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        for(int j=10000;j>=0;j--){
            if(dp[j])dp[j+a]=1,dp[j+b]=1,dp[j]=0;
        }
    }
    if(dp[x])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)solve();
}