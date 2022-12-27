#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	int sum=0;
	sum=(1+n/2)*(n/2)/2*2+(n%2?(n+1)/2:0);
	// cout<<sum<<endl;
	int l=0,r=1e9;
	int ans=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(mid*mid<=sum)ans=mid,l=mid+1;
		else r=mid-1;
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}