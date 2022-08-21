#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int mod=998244353;
int ans=0;
int km(int a,int b)
{
	int ans=1;
	while(b)
	{
		if(b&1)
			ans=ans*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return ans;
}
int inv[20];
int a[10],b[10];
int dfs(int sum)
{
	if(b[0]<=0)return sum;
	if(a[0]<=0)return 0;
	int cnt=0;
	for(int i=0;i<8;i++)
		if(a[i]>0)cnt++;
	for(int i=0;i<8;i++)
		if(b[i]>0)cnt++;
	int ans=0;
	for(int i=0;i<8;i++)
	{
		if(a[i]>0)
		{
			a[i]-=10;
			ans+=dfs(sum*inv[cnt]%mod);
			if(ans>=mod)ans-=mod;
			a[i]+=10;
		}
	}
	for(int i=0;i<8;i++)
	{
		if(b[i]>0)
		{
			b[i]-=10;
			ans+=dfs(sum*inv[cnt]%mod);
			if(ans>=mod)ans-=mod;
			b[i]+=10;
		}
	}
	return ans;
}
signed main()
{
	for(int i=1;i<=16;i++)
		inv[i]=km(i,mod-2);
	for(int i=0;i<8;i++)
		cin>>a[i];
	for(int i=0;i<8;i++)
		cin>>b[i];
	cout<<dfs(1);
}