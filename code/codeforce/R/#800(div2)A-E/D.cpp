#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int a[200005];
int n;
int ans;
vector<P>ve(200005);
vector<int>v[200005];
int dfs(int p)
{
	int sum=0;
	if(v[p].size()==0){
		ans++;
		return ve[p].second;
	}
	for(auto i:v[p]){
		int t=dfs(i);
		sum+=t;
	}
	if(ve[p].first>sum){
		ans++;
		return ve[p].second;
	}
	return min(sum,ve[p].second);
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		v[i].clear();
	}
	int x;
	for(int i=2;i<=n;i++){
		cin>>x;
		v[x].push_back(i);
	}
	int a,b;
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		ve[i].first=a;
		ve[i].second=b;
	}
	ans=0;
	dfs(1);
	//puts("-------");
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}