#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int vis[40];
void solve()
{
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		vis[s[i]-'a']++;
	}
	int fl=0;
	for(int i=0;i<26;i++){
		if(vis[i]==1){
			fl=1;
			char c='a'+i;
			cout<<c;
			return;
		}
	}
	puts("-1");
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}