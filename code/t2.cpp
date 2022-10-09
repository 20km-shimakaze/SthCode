#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int l1,l2,l3,t1,t2,t3;
int T;
const double pi=acos(-1);
void solve()
{
	cin>>T>>l1>>l2>>l3>>t1>>t2>>t3;
	double x1,x2,x3,y1,y2,y3;
	double T1=2*pi*((T%t1)*1.0/t1);
	y1=sin(T1)*l1;
	x1=cos(T1)*l1;
	// printf("%6lf %6lf\n",x1,y1);
	double T2=2*pi*((T%t2)*1.0/t2);
	y2=sin(T2)*l2;
	x2=cos(T2)*l2;
	// printf("%6lf %6lf\n",x2,y2);
	double T3=2*pi*((T%t3)*1.0/t3);
	y3=sin(T3)*l3;
	x3=cos(T3)*l3;
	// printf("%6lf %6lf\n",x3,y3);
	double ansx=x1+x2+x3;
	double ansy=y1+y2+y3;
	printf("%6lf %6lf\n",ansy,ansx);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}