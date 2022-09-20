#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,a[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=a[1];
	for(int i=2;i<=n;i++){
		if(a[i]>a[i-1])ans=a[i];
		else break;
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}