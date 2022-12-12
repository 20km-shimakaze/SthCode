#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,len,a[N];
void solve()
{
	cin>>n>>len;
	for(int i=1;i<=n;i++)cin>>a[i];
	int ans=INF;
	for(int i=1;i<=n;i++){
		int di=lower_bound(a+1,a+1+n,len-a[i])-a-1;
		if(di!=0)ans=min({ans,abs(a[i]-(len-a[di]))});
		if(di!=n)ans=min({ans,abs(a[i]-(len-a[di+1]))});
	}
	cout<<2*ans+2*len<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}