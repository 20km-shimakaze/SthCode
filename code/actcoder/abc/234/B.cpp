#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
double s[103][2];
void solve()
{
	int n;
	cin>>n;
	double ans=0;
	for(int i=1;i<=n;i++)cin>>s[i][0]>>s[i][1];
	for(int i=1;i<=n;i++){
		double x1=s[i][0];
		double y1=s[i][1];
		for(int j=1;j<=n;j++){
			double x2=s[j][0];
			double y2=s[j][1];
			double t=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
			ans=max(ans,t);
		}
	}
	printf("%lf",sqrt(ans));
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}