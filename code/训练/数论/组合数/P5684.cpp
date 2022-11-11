#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e5+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
vector<int>v(26);
int fac[N];
void init()
{
    fac[0]=1;
    for(int i=1;i<N;i++){
        fac[i]=fac[i-1]*i%mod;
    }
}
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
int inv(int z)
{
    return qpow(z,mod-2);
}
int A(int n,int m)
{
    if(m>n)return 0;
    return fac[n]*inv(fac[n-m])%mod;
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
	init();
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(char c:s)v[c-'a']++;
	int ans=1;
	int fl=0;
	int fnum=0;
	for(int x:v){
		if(x&1)fl++,fnum=x;
	}
	if(fl>1){
		cout<<A(n,n)<<endl;
		return;
	}
	int len=n/2;
	for(int x:v){
		if(x&1)ans=(ans*A(x-1,x/2))%mod;
		else ans=(ans*A(x,x/2))%mod;
	}
	// cout<<ans<<endl;
	ans=(ans*fac[n/2])%mod;
	// cout<<ans<<endl;
	// cout<<fnum<<endl;
	if(fnum&1)ans=(ans*fnum)%mod;
	// cout<<ans<<endl;
	// cout<<A(n,n)<<" "<<ans<<endl;
	// ans/=2;
	ans=((fac[n]-ans)%mod+mod)%mod;
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