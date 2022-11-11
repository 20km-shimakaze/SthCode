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
	int n,m;
	cin>>n>>m;
	string s=" ";
	for(int i=0;i<26;i++){
		for(int j=1;j<=n;j++){
			s+=i+'A';
		}
	}
	cout<<s[m]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}