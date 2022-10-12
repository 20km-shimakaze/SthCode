#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int a[N];
int n,m,t;
map<int,int>mp;
void solve()
{
	cin>>n>>m>>t;
	for(int i=1;i<n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		mp[x]+=y;
	}
	int i;
	for(i=1;i<n;i++){
		t+=mp[i];
		if(t<=a[i])break;
		t-=a[i];
	}
	if(i==n)cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}