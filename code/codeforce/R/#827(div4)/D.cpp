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
	int n,ans=-1;
	cin>>n;
	vector<int>v(n),a;
	map<int,int>mp;
	for(int i=0;i<n;i++)cin>>v[i],mp[v[i]]=i+1;
	for(auto[x,val]:mp){
		for(auto[y,vy]:mp){
			int t=__gcd(x,y);
			if(t==1)ans=max(ans,val+vy);
		}
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