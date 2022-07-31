#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	string s;
	int n;
	cin>>n>>s;
	ll ans=0;
	for(int i=0;i<n;i++){
		if(s[i]!=s[i-1]){
			ans+=i+1;
		}
		else{
			ans+=1;
		}
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}