#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int a[2];
void wr(int x)
{
	if(x<=9)cout<<x;
	else printf("%c",x-10+'A');
}
void solve()
{
	int n;
	cin>>n;
	a[1]=n%16;
	n/=16;
	a[0]=n;
	wr(a[0]);
	wr(a[1]);
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}