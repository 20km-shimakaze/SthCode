#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int cnt1,cnt2,cnt3;
int a[3];
void solve()
{
	cin>>a[0]>>a[1]>>a[2];
	cnt3=min({a[0],a[1],a[2]});
	a[0]-=cnt3,a[1]-=cnt3,a[2]-=cnt3;
	sort(a,a+3,[&](int a,int b){
		return a>b;
	});
	cnt2=a[1];
	a[0]-=cnt2,a[1]=cnt2;
	cnt1=a[0];
	if(cnt1<=cnt3)cout<<cnt1+cnt2+cnt3<<endl;
	else cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}