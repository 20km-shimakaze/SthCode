#include<bits/stdc++.h>
using namespace std;
int dp1[200],dp2[200],n;//到第i位同学且用i最多的个数
int a[200];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++){
        dp1[i]=1;
        for(int j=1;j<i;j++){
            if(a[i]>a[j])dp1[i]=max(dp1[i],dp1[j]+1);
        }
    }
    for(int i=n;i>=1;i--){
        dp2[i]=1;
        for(int j=n;j>i;j--){
            if(a[i]>a[j])dp2[i]=max(dp2[i],dp2[j]+1);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp1[i]+dp2[i]-1);
    }
    // for(int i=1;i<=n;i++){
    //     cout<<dp1[i]<<" ";
    // }puts("");
    // for(int i=1;i<=n;i++){
    //     cout<<dp2[i]<<" ";
    // }puts("");
    cout<<ans;
}