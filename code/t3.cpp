/*
	Ƕ�ױ����Ƿ���ͬ
	������������ 0 1 2 n
	�����Ƿ�Խ��
	��long long
*/
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long
using ll=long long;
using pii=pair<int,int>;
const int mod=998244353;
const int INF=0x3f3f3f3f;
const int maxn=111;
int dp[maxn][maxn];
int a[maxn];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	int ans=0;
	for(int q=1;q<=n;q++)
	{
		for(int i=0;i<=n;i++)
			for(int j=0;j<=n;j++)
				dp[i][j]=0;
		dp[0][0]=1;//ȡ��i����ʱ��ģ��Ϊj
		for(int i=1;i<=n;i++)
		{
			for(int j=q;j>=1;j--)
			{
				for(int k=0;k<q;k++)
				{
					//cout<<j-1<<" "<<k<<" "<<dp[j-1][k]<<endl;
					dp[j][(k+a[i])%q]+=dp[j-1][k];
					dp[j][(k+a[i])%q]%=mod;
					//cout<<j<<" "<<(k+a[i])%q<<" "<<dp[j][(k+a[i])%q]<<endl<<endl;
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
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
		solve();
	return 0;
}
/*
3
1 1 1
*/