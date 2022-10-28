#include <bits/stdc++.h>
using namespace std;
int n,a[104];
int s[104];
int main()
{
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++)cin>>a[i],sum+=a[i];
	sum/=n;
	for(int i=1;i<=n;i++)a[i]-=sum,s[i]=s[i-1]+a[i];
	sort(s+1,s+1+n);
	int t=s[n/2+1];
	int ans=0;
	for(int i=1;i<=n;i++)ans+=abs(t-s[i]);
	cout<<ans<<endl;
}