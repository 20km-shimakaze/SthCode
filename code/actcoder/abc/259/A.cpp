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
	int r,now,l,he,dif;
	cin>>r>>now>>l>>he>>dif;
	if(now>=l){
		cout<<he<<endl;
	}
	else{
		cout<<he-(l-now)*dif<<endl;
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