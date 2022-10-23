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
	string s;
	cin>>n>>s;
	int ans=0,odd=0;
	for(int i=0;i<n-2;i++){
		if(s.substr(i,3)=="ARC"){
			ans++;
			int l=i-1,r=i+3;
			while(l>=0&&r<n&&s[l]=='A'&&s[r]=='C')l--,r++,odd++;
		}
	}
	cout<<ans+min(odd,ans)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}