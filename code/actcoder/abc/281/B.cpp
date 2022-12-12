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
	cin>>s;
	int fl=0;
	if(s.size()!=8)fl=1;
	for(int i=1;i<s.size()-1;i++){
		if(s[i]>'9'||s[i]<'0')fl=1;
	}
	if(s[0]>'Z'||s[0]<'A'||s.back()>'Z'||s.back()<'A')fl=1;
	if(s.size()>2&&s[1]=='0')fl=1;
	cout<<(fl?"No":"Yes")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}