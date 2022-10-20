#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n,x;
	cin>>n>>x;
	vector<int>su(n+1),a(n+1),b(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		su[i]=su[i-1]+a[i]+b[i];
	}
	int minn=INF;
	for(int i=1;i<=n;i++){
		if(i>x)continue;
		int sum=su[i];
		sum+=(x-i)*b[i];
		minn=min(minn,sum);
	}
	cout<<minn<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}