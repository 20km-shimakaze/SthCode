#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<60;i++){
		if((n>>i)&1){
			v.push_back(i);
		}
	}
	int k=v.size();
	for(int i=0;i<(1<<k);i++){
		int res=0;
		for(int j=0;j<k;j++){
			if((i>>j)&1){
				res+=(1ll<<v[j]);
			}
		}
		cout<<res<<endl;
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