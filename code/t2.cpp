#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
vector<P>v[200005];
vector<int>d[200005];
int n;
bitset<1000006>vis;
int dep[200005];
int fu(int p,int fa)
{
	dep[p]=dep[fa]+1;
	d[dep[p]].push_back(p);
	for(P di:v[p]){
		if(di.first==fa)continue;
		fu(di.second,p);
	}
}
int dfs(int p,int fa)
{
	int ans=INT_MAX;
	for(P di:v[p]){
		if(fa==di.first)continue;
		ans=min({ans,di.second+dfs(di.first,p)});
	}
}
void solve()
{
	cin>>n;
	for(int i=1;i<n;i++){
		int a,b,w;
		cin>>a>>b>>w;
		v[a].push_back({b,w});
		v[b].push_back({a,w});
	}
	
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}