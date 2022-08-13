#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int mod=998244353;
int qpow(int n,int m)
{
	int res=1;
	while(m){
		if(m&1)res=(res*n)%mod;
		m>>=1;
		n=(n*n)%mod;
	}
	return res;
}
map<int,int>mp;
int x,y;
void solve()
{
	cin>>mod>>x>>y;
	int T=0;
	while(T*T<=mod)T++;
	int buf=qpow(x,mod-2);
	int pro=1;
	for(int i=0;i<T;i++){
		mp[pro*y%mod]=i;
		pro=pro*buf%mod;
	}
	buf=qpow(pro,mod-2);
	pro=1;
	for(int i=0;i<T;i++){
		if(mp.count(pro)){
			cout<<i*T+mp[pro]<<endl;
			return;
		}
		pro=pro*buf%mod;
	}
	cout<<"no solution"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}