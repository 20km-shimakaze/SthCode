#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	vector<P>v(n);
	for(int i=0;i<n;i++){
		cin>>v[i].first>>v[i].second;
		if(v[i].first<v[i].second)swap(v[i].first,v[i].second);
	}
	sort(v.begin(),v.end());
	int ans=0;
	ans+=v[0].first;
	ans+=v.back().first;
	ans+=2*v[0].second;
	for(int i=1;i<n;i++){
		ans+=2*v[i].second;
		ans+=v[i].first-v[i-1].first;
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}