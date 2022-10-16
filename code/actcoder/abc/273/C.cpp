#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int a[N];
int vis[N];
void solve()
{
	int n;
	cin>>n;
	set<int>se;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		se.insert(a[i]);
	}
	vector<int>v;
	for(int x:se)v.push_back(x);
	// for(int x:v)cout<<x<<" ";cout<<endl;
	for(int i=1;i<=n;i++){
		int di=lower_bound(v.begin(),v.end(),a[i])-v.begin();
		// cout<<di<<endl;
		vis[v.size()-di-1]++;
	}
	for(int i=0;i<n;i++)cout<<vis[i]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}