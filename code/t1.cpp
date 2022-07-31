#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,mod=998244353;
int fac[200005];
int qpow(int a,int b)
{
    int res=1;
    while(b)
    {
        if(b&1)
            res=res*a%mod;
        a=a*a%mod;
        b>>=1;
    }
    return res;
}
int C(int n,int m)
{
    if(n<m) return 0;
    int res=1;
    for(int i=1;i<=m;i++)
    {
        res*=((n-m+i)%mod)*qpow(i,mod-2)%mod;
        res%=mod;
    }
    return res;
}
void solve()
{
	cin>>n;
	int ans=0;
	ans=qpow(2,n)*C(2*n,n+3)%mod;
	cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}