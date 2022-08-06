#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,m;
vector<int>v[100005];
void solve()
{
	cin>>n>>m;
	int x;
	for(int i=0;i<n;i++){
		for(int j=1;j<=m;j++){
			cin>>x;
			v[i].push_back(x);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<v[j][i]<<" ";
		}
		puts("");
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