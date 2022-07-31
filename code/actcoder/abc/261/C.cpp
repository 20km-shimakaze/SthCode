#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n;
map<string,int>mp;
void solve()
{
	cin>>n;
	string s;
	for(int i=1;i<=n;i++){
		cin>>s;
		mp[s]++;
		int t=mp[s];
		cout<<s;
		if(t==1){
			cout<<endl;
		}
		else{
			cout<<'('<<t-1<<')'<<endl;
		}
	}
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}