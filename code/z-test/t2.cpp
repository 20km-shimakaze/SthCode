#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
int mod=998244353;
int n;
int fac[N],inv[N];
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
void init(int n)
{
	inv[0]=fac[0]=1;
	for(int i=1;i<=n;i++){
		inv[i]=inv[i-1]*qpow(i,mod-2)%mod;
	}
	for(int i=1;i<=n;i++){
		fac[i]=(fac[i-1]*i)%mod;
	}
}
int C(int n,int m)
{
    if(m>n)return 0;
    return fac[n]*inv[m]%mod*inv[n-m]%mod;
}
void solve()
{
    cin>>n>>mod;
    init(n);
    int ans=0;
    int t=n/2;
    for(int i=t;i<=n-2;i++){
        for(int j=0;j<=n-i-2;j++){
            ans=(ans+C(n-i-2,j)*fac[i+j-1]%mod*(2*t-i)%mod)%mod;
        }
    }
    if(n%2==0)ans=(ans+fac[n-2])%mod;
    cout<<ans*n%mod<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}