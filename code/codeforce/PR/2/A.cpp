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
	string s;
	int n;
	cin>>n>>s;
	int t=(s[0]=='1');
	for(int i=1;i<s.size();i++){
		if(t&&s[i]=='1')cout<<'-',t--;
		else if(t&&s[i]=='0')cout<<'-';
		else if(s[i]=='1')cout<<'+',t++;
		else cout<<'-';
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}