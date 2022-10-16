#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int x,k;
void solve()
{
	cin>>x>>k;
	int t=1;
	for(int i=1;i<=k;i++){
		int an=pow(10ll,i);
		int y=x%an;
		if(y>=an/2)x=x/an*an+an;
		else x=x/an*an;
	}
	cout<<x<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}