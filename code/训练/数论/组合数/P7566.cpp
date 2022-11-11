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
	vector<int>a(4,0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		if(s[0]=='M')a[0]++;
		else if(s[0]=='C')a[1]++;
		else if(s[0]=='O')a[2]++;
		else if(s[0]=='I')a[3]++;
	}
	int ans=0;
	ans+=a[0]*a[1]*a[2]+a[0]*a[1]*a[3]+a[0]*a[2]*a[3]+a[1]*a[2]*a[3];
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