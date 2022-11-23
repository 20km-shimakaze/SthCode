#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,a,b;
void solve()
{
	cin>>n>>a>>b;
	int fl=0;
	if(a+b<n-1)fl=1;
	if(a==n&&b==n)fl=1;
	cout<<(fl==1?"YES":"NO")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}