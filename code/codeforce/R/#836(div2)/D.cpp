#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
void solve()
{
	cin>>n;
	if(n%2==0){
		for(int i=n-n/2;i<n;i++)cout<<i<<" ";
		for(int i=n+1;i<=n+n/2;i++)cout<<i<<" ";
	}
	else{
		vector<int>v;
		for(int i=n-n/2;i<=n+n/2;i++)v.push_back(i+2);
		v[0]-=1;
		v.back()+=1;
		v[v.size()-2]+=1;
		for(int x:v)cout<<x<<" ";
	}
	cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}