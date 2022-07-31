#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,x;
int a[200005],sum[200005],b[200005];
bool cmp(int t1,int t2)
{
	return t1>t2;
}
void solve()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+a[i];
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		int t1=max(-1ll,x-sum[i]);
		ans+=max(0ll,t1/i)+(t1>=0?1:0);
		//cout<<t1/i<<endl;
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}