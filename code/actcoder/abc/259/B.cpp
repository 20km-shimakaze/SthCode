/*
转化为弧度制然后再转化回来
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
const double PI=acos(-1);
void solve()
{
    double a,b,d;
    cin>>a>>b>>d;
    double at=d/180*PI;
    double dd=sqrt(a*a+b*b);
    double tt=(atan2(b,a)+at+2*PI);
    printf("%lf %lf\n",dd*cos(tt),dd*sin(tt));
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}