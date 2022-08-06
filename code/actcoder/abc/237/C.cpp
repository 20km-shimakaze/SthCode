#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
string s;
void solve()
{
	cin>>s;
	int fl=1,ff=1;
	int n=s.size();
	int l=0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='a'&&s[l]=='a'&&fl){
			l++;
			continue;
		}
		if(fl&&s[i]=='a')continue;
		if(s[i]!='a')fl=0;
		if(l==i)break;
		if(s[i]!=s[l])ff=0;
		l++;
	}
	if(ff)puts("Yes");
	else puts("No");
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}