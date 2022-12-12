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
int p[N];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n+1;i++)p[i]=n+1;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		if(x>y)swap(x,y);
		p[x]=min(p[x],y);
	}
	for(int i=n;i>=1;i--)p[i]=min(p[i],p[i+1]);
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=p[i]-i;
		if(p[i]==i)ans++;
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