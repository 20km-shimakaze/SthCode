#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N],ra[N],n,k,q;
void solve()
{
	cin>>n>>k>>q;
	for(int i=1;i<=k;i++){
		int x;
		cin>>x;
		a[x]=1;
		ra[i]=x;
	}
	for(int i=1;i<=q;i++){
		int x;
		cin>>x;
		int dis=ra[x];
		if(dis==n||a[dis+1])continue;
		a[dis]=0;
		a[dis+1]=1;
		ra[x]=dis+1;
	}
	for(int i=1;i<=n;i++){
		if(a[i])cout<<i<<" ";
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