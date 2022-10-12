#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,m,a,b,c,d,e,f;
void solve()
{
	cin>>n>>m;
	set<P>se,dd;
	for(int i=1;i<=3;i++){
		int x,y;
		cin>>x>>y;
		dd.insert({x,y});
	}
	map<P,int>dp;
	dp[{0,0}]=1;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		se.insert({x,y});
	}
	for(int i=1;i<=n;i++){
		map<P,int>ne_dp;
		for(auto[xy,val]:dp){
			auto [x,y]=xy;
			for(auto [dx,dy]:dd){
				int xx=x+dx;
				int yy=y+dy;
				if(se.find({xx,yy})==se.end()){
					ne_dp[{xx,yy}]=(ne_dp[{xx,yy}]+val)%mod;
				}
			}
		}
		swap(dp,ne_dp);
	}
	int ans=0;
	for(auto[xy,val]:dp)ans=(ans+val)%mod;
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