#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int su0[N],su1[N];
int n;
int a[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		su0[i]=su0[i-1];
		su1[i]=su1[i-1];
		if(a[i])su1[i]++;
		else su0[i]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		if(!a[i])continue;
		ans+=su0[n]-su1[i];
	}
	for(int i=1;i<=n;i++){
		if(a[i])ans=max(ans,ans+su1[i-1]-(su0[n]-su0[i]));
		else ans=max(ans,ans-su1[i-1]+(su0[n]-su0[i]));
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