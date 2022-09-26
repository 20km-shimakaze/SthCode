#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int x,y,z;
void solve()
{
	cin>>x>>y>>z;
	if(x<0)y=-y,z=-z,x=-x;
	if(y>=0&&y<=x){
		if(z>=y)cout<<-1<<endl;
		else if(z<0)cout<<x-2*z<<endl;
		else cout<<x<<endl;
	}
	else cout<<x<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}