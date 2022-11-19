#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N];
int n;
void solve()
{
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[0]++;
		for(int j=3;j>=0;j--){
			if(x+j>=4)ans+=a[j];
			else a[x+j]+=a[j];
			a[j]=0;
		}
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}