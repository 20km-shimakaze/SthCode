#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n,q;
	cin>>n>>q;
	vector<int>a(n+1),he(n+1),ans(n+1);
	for(int i=1;i<=n;i++)cin>>a[i];
	int maxx=0;
	for(int i=1;i<=n;i++){
		if(maxx<a[i])maxx=a[i];
		he[i]=maxx;
		ans[i]=ans[i-1]+a[i];
	}
	he.push_back(INF);
	while(q--){
		int qq;
		cin>>qq;
		int di=upper_bound(he.begin()+1,he.end(),qq)-he.begin()-1;
		if(di==-1)cout<<0<<" ";
		else cout<<ans[di]<<" ";
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}