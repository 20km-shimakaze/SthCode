/*
dp���壺
x[k][0]�ڵ�k��û�е����յ�ķ���
x[k][1]�ڵ�k�������յ�ķ���
yͬ��
�ں���Ӧ��ʹ�����������k����x��yʹ���Ⱥ�˳��
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int mod=998244353;
int x[N][2],y[N][2];
int h,w,k,x1,x2,y11,y2;
int inv[N],fac[N];
int qpow(int a,int b)
{
	if(!a)return 0;
	int res=1;
	while(b){
		if(b&1)res=(res*a)%mod;
		a=(a*a)%mod;
		b>>=1;
	}
	return res;
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
	cin>>h>>w>>k>>x1>>y11>>x2>>y2;
	x[0][x1==x2]=1;
	y[0][y11==y2]=1;
    for(int i=1;i<=k;i++){
        x[i][1]=x[i-1][0];
		x[i][0]=(x[i-1][0]*(h-2)+x[i-1][1]*(h-1))%mod;
		y[i][1]=y[i-1][0];
		y[i][0]=(y[i-1][0]*(w-2)+y[i-1][1]*(w-1))%mod;
    }
	init(N-2);
	int res=0;
	for(int i=0;i<=k;i++){
		int t=C(k,i)*x[i][1]%mod*y[k-i][1]%mod;
		res=(res+t)%mod;
	}
	cout<<res<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}