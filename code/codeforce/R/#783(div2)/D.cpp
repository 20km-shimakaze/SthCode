/*
正解不会，是线段树结合前缀和o(nlogn)，我只会o(n^2)，
定义dp[i]为到第i为答案，维护dp[i]=max(dp[i],dp[j]+v(j+1,i));
v为从i-j贡献
*/
#include<bits/stdc++.h>
using namespace std;
int a[500005],dp[500005];
int n;
int sum[500005];
int v(int i,int j)
{
	int t=sum[j]-sum[i-1];
	if(t>0){
		return j-i+1;
	}
	else if(t<0){
		return -(j-i+1);
	}
	else return 0;
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp[i]=-1e9;
		sum[i]=sum[i-1]+a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			dp[i]=max(dp[i],dp[j]+v(j+1,i));
		}
	}
	cout<<dp[n]<<endl;
}
int main()
{
	int t;
	cin>>t;
	while(t--)solve();
}