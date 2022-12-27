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
P p[10];
void solve()
{
	int fl=0;
	for(int i=0;i<3;i++)cin>>p[i].first>>p[i].second;
	vector<int>v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);
	do{
		if(p[v[0]].first==p[v[1]].first&&p[v[1]].second==p[v[2]].second)fl=1;
	}while(next_permutation(v.begin(),v.end()));
	if(fl)cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}