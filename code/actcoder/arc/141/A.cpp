#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	string s;
	cin>>s;
	int n=s.size();
	int x=stoll(s);
	int ans=0;
	for(int i=1;i<n;i++){
		if(n%i)continue;
		int l=n/i;
		int now=stoll(s.substr(0,i));
		int now1=now-1;
		string pre=to_string(now);
		string pre1=to_string(now1);
		string x1,x2;
		for(int i=1;i<=l;i++){
			x1+=pre;
			x2+=pre1;
		}
		int y1=stoll(x1);
		int y2=stoll(x2);
		if(y1<=x)ans=max(ans,y1);
		if(y2<=x)ans=max(ans,y2);
	}
	int maxx=stoll(string (n-1,'9'));
	cout<<max(maxx,ans)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}