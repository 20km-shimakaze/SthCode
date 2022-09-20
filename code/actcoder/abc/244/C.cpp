#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n;
int vis[N];
void solve()
{
	cin>>n;
	cout<<1<<endl;
	vis[1]=1;
	int t=1;
	for(int i=1;i<=n;i++){
		int x;cin>>x;
		vis[x]=1;
		while(vis[t])t++;
		cout<<t<<endl;
		vis[t]=1;
	}
	int x;
	cin>>x;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}