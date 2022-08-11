#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int fac[N];
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
// void init()
// {
//     fac[0]=1;
//     for(int i=1;i<=N;i++){
//         fac[i]=fac[i-1]*i%mod;
//     }
// }
// int qpow(int a,int b)
// {
//     int res=1;
//     while(b)
//     {
//         if(b&1)
//             res=res*a%mod;
//         a=a*a%mod;
//         b>>=1;
//     }
//     return res;
// }
// int inv(int z)
// {
//     return qpow(z,mod-2);
// }
// int C(int n,int m)
// {
//     if(n<m) return 0;
//     int res=1;
//     for(int i=1;i<=m;i++)
//     {
//         res*=((n-m+i)%mod)*qpow(i,mod-2)%mod;
//         res%=mod;
//     }
//     return res;
// }
// int C(int n,int m)
// {
//     if(m>n)return 0;
//     return fac[n]*inv(fac[m])%mod*inv(fac[n-m])%mod;
// }

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

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	init_inv(205);
	for(int &x:v)x=read();
	int sum=accumulate(v.begin()+1,v.end(),0LL);
	if(v[0]<k+sum){
		cout<<0<<endl;
		return;
	}
	v[0]-=sum+k;
	int an=1;
	an=C(v[0]+k-1,k-1);
	for(int i=1;i<n;i++){
		an*=C(v[i]+k-1,k-1);
		an%=mod;
		//cout<<an<<endl;
	}
	cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}