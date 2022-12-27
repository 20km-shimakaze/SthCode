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
int a[N],n;
int ans=0;
void dfs(int l,int r)
{
	if(l==r)return;
	int mid=(l+r)/2;
	int len=(r-l+1)/2;
	dfs(l,mid),dfs(mid+1,r);
	if(a[l]>a[r]){
		ans++;
		for(int i=l;i<=mid;i++)swap(a[i],a[i+len]);
	}
}
void solve()
{
	cin>>n;
	ans=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	dfs(1,n);
	for(int i=1;i<=n;i++){
		if(a[i]!=i){
			cout<<-1<<endl;
			return;
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