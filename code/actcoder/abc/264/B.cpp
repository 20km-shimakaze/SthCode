#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
void solve()
{
	int R,C;
	cin>>R>>C;
	
	int up=R,down=15-R+1,l=C,r=15-C+1;
	int num=min({up,down,l,r});
	
	if(num&1)cout<<"black";
	else cout<<"white";
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}