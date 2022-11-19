#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,a[N];
void solve()
{
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	int x;
	cin>>x;
	int ans=0;
	ans=x/sum*n;
	x%=sum;
	int t=0;
	for(int i=1;i<=n;i++){
		t+=a[i];
		if(t>x){
			cout<<ans+i<<endl;
			return;
		}
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