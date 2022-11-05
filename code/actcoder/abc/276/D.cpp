#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	
	int t=v[0];
	for(int x:v)t=__gcd(t,x);
	int ans=0;
	int flag=0;
	for(int x:v){
		x/=t;
		while(x%2==0)x/=2,ans++;
		while(x%3==0)x/=3,ans++;
		if(x!=1){
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
	//cin >> __;
	while (__--)
		solve();
}