/*
用map记录之前已经存在的前缀和数量，然后检查是否存在前缀和-k的前缀和
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int su[N],a[N],ans,n,k;
map<int,int>mp;
void solve()
{
	cin>>n>>k;
	int x,sum=0;
	mp[0]=1;
	for(int i=1;i<=n;i++){
		cin>>x;
		sum+=x;
		ans+=mp[sum-k];
		mp[sum]++;
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