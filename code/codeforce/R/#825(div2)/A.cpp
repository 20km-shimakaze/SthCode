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
int a[N],b[N];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	int ans1=0,ans2=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i])ans1++;
	}
	sort(a+1,a+1+n);
	sort(b+1,b+1+n);
	ans2++;
	for(int i=1;i<=n;i++){
		if(a[i]!=b[i])ans2++;
	}
	cout<<min(ans1,ans2)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}