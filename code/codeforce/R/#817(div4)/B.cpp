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
	int n;
	cin>>n;
	string s[2];
	cin>>s[0]>>s[1];
	for(char &c:s[0])if(c=='B')c='G';
	for(char &c:s[1])if(c=='B')c='G';
	int fl=0;
	for(int i=0;i<n;i++){
		if(s[0][i]!=s[1][i])fl=1;
	}
	cout<<(fl?"NO":"YES")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}