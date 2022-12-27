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
void solve()
{
	int n;
	string s;
	cin>>n>>s;
	int a=0,b=0;
	for(char c:s){
		if(c=='0')a++;
		else b++;
	}
	for(int i=(1<<b);i<=(1<<n)-(1<<a)+1;i++)cout<<i<<" ";cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}