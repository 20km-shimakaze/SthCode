#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,s[503][503];
void solve()
{
	cin>>n;
	int num=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j+=2)s[i][j]=++num;
		for(int j=2;j<=n;j+=2)s[i][j]=++num;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
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