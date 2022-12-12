#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;
const int N=1e6+7;
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
// int C(int n,int m)
// {
//     if(m>n)return 0;
//     return fac[n]*inv(fac[m])%mod*inv(fac[n-m])%mod;
// }
int A(int n,int m)
{
    if(m>n)return 0;
    return fac[n]*inv(fac[n-m])%mod;
}
int Lucas(int n,int m)
{
    if(m==0) return 1;
    return (Lucas(n/mod,m/mod)*C(n%mod,m%mod))%mod;
}
/*
int inv[N];
void init_inv(int n)
{
	inv[1]=1;
	for(int i=2;i<=n;i++){
		inv[i]=(mod-mod/i)*inv[mod%i]%mod;
	}
}
int C(int n,int m)//需要先处理inv,范围m
{
	int s=1;
	for(int i=0;i<m;i++){
		s=s*(n-i)%mod*inv[i+1]%mod;
	}
	return s;
}
*/
/*
//大范围预处理阶乘和逆元
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
*/
signed main()
{
    int n;
    cin>>n;
    // cout<<(Lucas(n,4) + Lucas(n-1,2))%mod<<endl;
    return 0;
}
