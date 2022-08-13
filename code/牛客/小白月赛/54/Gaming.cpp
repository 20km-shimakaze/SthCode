#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+6;
const int mod=998244353;
int su[N];
int n,m;
void solve()
{
	cin>>n>>m;
	int sum=0;
	for(int i=1;i<=n;i++){
		int x,y,s;
		cin>>x>>y>>s;
		su[x]+=s;
		su[y+1]-=s;
		sum+=s;
	}
	for(int i=1;i<=m;i++){
		su[i]+=su[i-1];
	}
	int ans=0;
	for(int i=1;i<=m;i++){
		ans=max(ans,sum-su[i]);
	}
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