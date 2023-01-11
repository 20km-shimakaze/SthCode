#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
int n;
int qpow(ll a,ll n)
{
	if(a%mod==0)return 0;
	ll ans=1;
	while(n){
		if(n&1){
			ans=ans*a%mod;
		}
		n>>=1;
		a=a*a%mod;
	}
	ans%=mod;
	return ans;
}
void solve()
{
	cin>>n;
	int ans=0;
	ans=(n-1)*n%mod*(2*n-1)%mod*qpow(6,mod-2)%mod+n*(n-1)%mod*qpow(2,mod-2)%mod+n*(n+1)%mod*(2*n+1)%mod*qpow(6,mod-2)%mod;
	cout<<(ans*2022)%mod<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}