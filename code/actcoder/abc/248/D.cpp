#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int a[1000];
int n,m;
P dp[100005][2];// zhi tianshu
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        dp[i][0].first=max(dp[i-1][0].first,dp[i-1][1].first);
        
    }
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}