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
	string s;
	int n,q;
	cin>>n>>q>>s;
	int di=0;
	while(q--){
		int op,x;
		cin>>op>>x;
		if(op==1){
			di+=x;
			di%=n;
		}
		else{
			if(x<=di){
				cout<<s[n-di+x-1]<<endl;
			}
			else cout<<s[x-di-1]<<endl;
		}
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