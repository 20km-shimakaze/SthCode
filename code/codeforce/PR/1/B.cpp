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
	set<int>se;
	int n;
	cin>>n;
	vector<int>v(n);
	for(int &x:v){
		cin>>x;
		se.insert(x);
	}
	if(se.size()==1||se.size()>2){
		cout<<n<<endl;
		return;
	}
	cout<<n/2+1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}