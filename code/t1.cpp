#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int mod=998244353;
int qpow(int a,int b)
{
	int res=1;
	while(b){
		if(b&1)res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}
int fac[N],inv[N];
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
int s[8][2];
void solve()
{
	for(int i=0;i<=1;i++){
		for(int j=0;j<8;j++){
			cin>>s[j][i];
		}
	}
	int a=(s[0][0]+9)/10,b=(s[0][1]+9)/10;
	int t=__gcd(a,b);
	a/=t,b/=t;
	//cout<<a<<" "<<b<<endl;
	init(N-2);
	int ans=0;
	t=qpow(2,b);
	for(int i=b;i<=a+b-1;i++){
		ans+=C(i-1,b-1)*qpow(t,mod-2);
		ans%=mod;
		t=t*2%mod;
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}
/*
1 1 0 0 0 0 0 0
11 0 0 0 0 0 0 0

20 0 0 0 0 0 0 0
30 0 0 0 0 0 0 0
*/