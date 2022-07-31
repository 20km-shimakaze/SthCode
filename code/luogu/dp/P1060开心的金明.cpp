#include<bits/stdc++.h>
using namespace std;
int n,m,dp[30005];
struct poi
{
    int imp,m;
}a[30];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a[i].m>>a[i].imp;
    }
    for(int i=1;i<=m;i++){
        for(int j=n;j>=a[i].m;j--){
            dp[j]=max(dp[j],dp[j-a[i].m]+a[i].m*a[i].imp);//同P1048
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}