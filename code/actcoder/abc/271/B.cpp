#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
vector<vector<int>>v;
void solve()
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		int le;
		cin>>le;
		vector<int>vv;
		for(int j=1;j<=le;j++){
			int x;
			cin>>x;
			vv.push_back(x);
		}
		v.push_back(vv);
	}
	for(int i=1;i<=q;i++){
		int s,t;
		cin>>s>>t;
		cout<<v[s-1][t-1]<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}