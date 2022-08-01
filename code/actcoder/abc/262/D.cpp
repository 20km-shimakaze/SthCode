#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,a[103],dp[103];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0;
    int t[103];
    for(int i=1;i<=n;i++){
        memset(dp,0,sizeof(dp));
        dp[a[1]%i]=1;
        for(int j=2;j<=n;j++){
            for(int k=0;k<=n;k++)t[k]=dp[k];
            for(int k=0;k<=n;k++){
                if(t[k])dp[(k+a[j])%i]=t[k]+1;
            }
        }
        for(int j=0;j<=n;j++)cout<<dp[j]<<" ";puts("");
        ans+=dp[0];
        cout<<dp[0]<<endl;
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