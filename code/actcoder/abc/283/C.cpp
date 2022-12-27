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
	cin>>s;
	int ans=0;
	for(int i=0;i<s.size();i++){
		if(i+1<s.size()&&s[i]=='0'&&s[i+1]=='0')i++,ans++;
	}
	cout<<s.size()-ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}