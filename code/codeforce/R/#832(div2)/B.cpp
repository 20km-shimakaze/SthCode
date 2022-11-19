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
	int n;
	cin>>n;
	cout<<(n+1)/2<<endl;
	int num=0;
	for(int i=1;i<=(n+1)/2;i++){
		cout<<num+2<<" "<<n-num<<endl;
		num+=3;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}