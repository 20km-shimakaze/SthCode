#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int fun(int h,int m)
{
	int a=h/10;
	int b=h%10;
	int c=m/10;
	int d=m%10;
	swap(b,c);
	int hh=10*a+b;
	int mm=10*c+d;
	if(hh<24&&mm<60)return 1;
	else return 0;
}
void solve()
{
	int h,m;
	cin>>h>>m;
	m--;
	for(int i=1;i<=24*60;i++){
		m++;
		h+=m/60;
		m%=60;
		h%=24;
		if(fun(h,m)){
			cout<<h<<" "<<m<<endl;
			return;
		}
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}