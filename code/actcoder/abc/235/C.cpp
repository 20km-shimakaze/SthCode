#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
vector<int>v[N];
map<int,int>mp,rmp;
int cnt=0;
int n,k,x,q;
void solve()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		int t;cin>>t;
		if(mp[t]==0)mp[t]=++cnt;
		v[mp[t]].push_back(i);
	}
	for(int i=1;i<=q;i++){
		cin>>x>>k;
		if(v[mp[x]].size()<k)cout<<-1<<endl;
		else cout<<v[mp[x]][k-1]<<endl;
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