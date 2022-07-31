#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,x,y;
int dp[20][2];
int dfs(int p,int id)
{
	if(p==1&&id==1)return 1;
	else if(p==1&&id==0)return 0;
	int &res=dp[p][id];
	if(res)return res;
	if(!id){
		res+=dfs(p-1,0)+x*dfs(p,1);
	}
	else res+=dfs(p-1,0)+y*dfs(p-1,1);
	return res;
}
void solve()
{
	cin>>n>>x>>y;
	cout<<dfs(n,0)<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}