#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int mod=998244353;
int n,a[103],dp[103][103];//��i����ʱ��ģ��Ϊj�ķ�����
void solve()
{
	cin>>n;
    int ans=0;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int q=1;q<=n;q++){//���Ա���ÿһ��%q�ķ�����
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){//
            for(int j=q;j>=1;j--){
                for(int k=0;k<q;k++){
                    dp[j][(a[i]+k)%q]=(dp[j][(a[i]+k)%q]+dp[j-1][k])%mod;
                }
            }
        }
        ans+=dp[q][0];
        ans%=mod;
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