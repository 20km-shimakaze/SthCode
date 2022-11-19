#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int dfs(vector<int>&v)
{
	if(v[0]==0)return 0;
	for(int i=1;i<v.size();i++){
		int t=0;
		v[0]--;
		swap(v[0],v[i]);
		t=dfs(v);
		if(t==0)return 1;
		swap(v[0],v[i]);
		v[0]++;
	}
	return 0;
}
void solve()
{
	vector<int>v;
	int n;
	cin>>n;
	int mi=INF;
	int fi;
	cin>>fi;
	for(int i=2;i<=n;i++){
		int x;
		cin>>x;
		// v.push_back(x);
		mi=min(mi,x);
	}
	// cout<<dfs(v)<<endl;
	if(fi>=mi)cout<<"Alice"<<endl;
	else cout<<"Bob"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}