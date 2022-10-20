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
	vector<int>v(5);
	for(int i=0;i<5;i++)cin>>v[i];
	sort(v.begin(),v.end());
	if((v[0]==v[1]&&v[0]==v[2]&&v[3]==v[4])||(v[0]==v[1]&&v[2]==v[3]&&v[3]==v[4]))cout<<"Yes"<<endl;
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