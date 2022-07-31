#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1000000007;
const int N=1e6+7;
int fac[N];
void init()
{
    fac[0]=1;
    for(int i=1;i<=N;i++){
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
signed main()
{
    int n;
    cin>>n;
    cout<<(Lucas(n,4) + Lucas(n-1,2))%mod<<endl;
    return 0;
}
