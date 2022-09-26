#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
struct poi
{
	int s,p;
}s[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>s[i].s;
	for(int i=1;i<=n;i++)cin>>s[i].p;
	sort(s+1,s+1+n,[&](poi a,poi b){
		return a.s<b.s;
	});
	double l=0,r=1e8+7;
	while(r-l>1e-7){
		double mid=(r+l)/2;
		double le1=0,le2=0;
		for(int i=1;i<=n;i++){
			if(s[i].s<mid)le1=max(le1,mid-s[i].s+s[i].p);
			else le2=max(le2,s[i].s-mid+s[i].p);
		}
		// cout<<le1<<" "<<le2<<endl;
		if(le1>le2)r=mid;
		else l=mid;
	}
	printf("%.6lf\n",l);
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}