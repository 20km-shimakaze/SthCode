#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int k;
int F(string s)
{
	int ans=0;
	for(char c:s){
		ans*=k;
		ans+=c-'0';
	}
	return ans;
}
void solve()
{
	cin>>k;
	string a,b;
	cin>>a>>b;
	cout<<F(a)*F(b)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}