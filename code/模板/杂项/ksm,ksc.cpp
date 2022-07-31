#include<iostream>
#define ll long long
using namespace std;
#define mod 998244353
inline ll ksc(ll x,ll y){
	ll res=0;
	while(y){
		if(y&1)res=(res+x)%mod;
		x=(x<<1)%mod; y>>=1;
	}return res;
}
ll qpow(ll a,ll n)
{
	if(a%mod==0)return 0;
	ll ans=1;
	while(n){
		if(n&1){
			ans=ksc(ans,a);
		}
		n>>=1;
		a=ksc(a,a);
	}
	ans%=mod;
	return ans;
}
int main()
{
	ll n,k,m;
	cin>>n>>k>>m;
	cout<<qpow(m,qpow(k,n))%mod<<endl;
	return 0;
}