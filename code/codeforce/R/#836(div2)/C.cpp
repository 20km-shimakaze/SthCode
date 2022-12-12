#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int vis[N];
int ans[N];
void solve()
{
	int n,nn;
	cin>>n>>nn;
	for(int i=1;i<=n;i++)vis[i]=0;
	vis[nn]=1;
	for(int i=1;i<=n;i++)ans[i]=i;
	ans[1]=nn;
	ans[nn]=n;
	ans[n]=1;
	if(n%nn){
		cout<<-1<<endl;
		return;
	}
	for(int idx=1;idx<n;idx++){
		for(int i=idx*2;i<n;i+=idx){
			if(ans[idx]>ans[i]&&(ans[idx]%i==0)&&(ans[i]%idx==0))swap(ans[idx],ans[i]);
		}
	}
	for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
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