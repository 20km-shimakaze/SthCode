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
int p[N];
int n,m;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		int t=0;
		for(int i=0;i<m;i++){
			if(s[i]=='o')t|=(1<<i);
		}
		// cout<<t<<endl;
		p[i]=t;
	}
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==j)continue;
			if((p[i]|p[j])==(1<<m)-1)ans++;
		}
	}
	cout<<ans/2<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}