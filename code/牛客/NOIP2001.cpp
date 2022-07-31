#include<bits/stdc++.h>
using namespace std;
int dp[20004],a[32];
int main()
{
    int n,v;
    cin>>v>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=v;j>=a[i];j--){
            dp[j]=max(dp[j],dp[i-a[j]]);
        }
    }
    for(int i=v;i>=0;i--){
        if(dp[i]){
            cout<<v-i<<endl;
            return 0;
        }
    }
}