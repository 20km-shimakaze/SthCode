#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int s[103][103];
int n;
void solve()
{
	cin>>n;
	s[1][1]=1;
	for(int i=2;i<=n;i++){
		s[i][1]=1;
		for(int j=2;j<i;j++){
			s[i][j]=s[i-1][j]+s[i-1][j-1];
		}
		s[i][i]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
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