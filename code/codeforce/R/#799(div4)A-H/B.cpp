#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a[10004];
int n,x;
void solve()
{
	cin>>n;
	vector<int>v;
	map<int,int>mp;
	for(int i=1;i<=n;i++){
		cin>>x;
		v.push_back(x);
	}
	int ans=0;
	for(int i=0;i<n;i++){
		if(!mp[v[i]])mp[v[i]]=1;
		else ans++;
	}
	if(ans%2)ans++;
	cout<<n-ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}