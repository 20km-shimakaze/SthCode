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
	int n;cin>>n;
	vector<int>a(n);
	for(int &x:a)cin>>x;
	vector<int>cnt(n,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cnt[(a[i]-1-i+j+n)%n]++;
		}
	}
	int ans=0;
	for(int x:cnt)ans=max(ans,x);
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