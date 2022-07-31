#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int ok[200005],n,k,a[200005];
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<n;i++){
		ok[i]=(a[i]<2*a[i+1]);
	}
	int sum=0;
	for(int i=1;i<=k;i++){
		sum+=ok[i];
	}
	int ans=0;
	if(sum==k)ans++;
	for(int i=k+1;i<n;i++){
		sum+=ok[i];
		sum-=ok[i-k];
		if(sum==k)ans++;
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}