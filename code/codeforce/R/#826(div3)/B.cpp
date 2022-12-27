#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
void solve()
{
	vector<int>v;
	int n;
	cin>>n;
	if(n==3){
		cout<<-1<<endl;
		return;
	}
	if(n%2==0){
		for(int i=1;i<n;i+=2){
			v.push_back(i+1);
			v.push_back(i);
		}
	}
	else{
		for(int i=n/2+1;i<=n;i++)v.push_back(i);
		for(int i=1;i<=n/2;i++)v.push_back(i);
	}
	for(int i:v)cout<<i<<" ";cout<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}