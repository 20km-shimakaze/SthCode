#include<bits/stdc++.h>
using namespace std;
int n,m,t,dp[300][300];//dp表示 金钱 时间 两个不能为0
struct poi
{
    int m,t;
}a[103];

int main()
{
    cin>>n>>m>>t;
    for(int i=1;i<=n;i++){
        cin>>a[i].m>>a[i].t;
    }
    for(int i=1;i<=n;i++){
        for(int j=m;j>=a[i].m;j--){
            for(int k=t;k>=a[i].t;k--){
                dp[j][k]=max(dp[j][k],dp[j-a[i].m][k-a[i].t]+1);
            }
        }
    }
    cout<<dp[m][t]<<endl;
    return 0;
}