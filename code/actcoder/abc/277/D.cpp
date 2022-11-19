#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m;
int a[N];
map<int,int>vis,mp,an;
int dfs(int x)
{
	if(an[x])return an[x];
	if(mp[x]==0||vis[x])return 0;
	vis[x]=1;
	// cout<<x<<"&&&"<<mp[x]<<endl;
	return an[x]=x*mp[x]+dfs((x+1)%m);
}
void solve()
{
	cin>>n>>m;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]++;
		sum+=a[i];
	}
	sort(a+1,a+1+n,[&](int a,int b){
		return a>b;
	});
	// sort(a+1,a+1+n);
	// for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
	int ans=0;
	for(int i=1;i<=n;i++){
		if(vis[a[i]])continue;
		ans=max(ans,dfs(a[i]));
		// cout<<ans<<"*"<<i<<endl;
	}
	// cout<<ans<<endl;
	// for(int i=1;i<=n;i++){
	// 	cout<<vis[a[i]]<<" ";
	// }cout<<endl;
	cout<<sum-ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}