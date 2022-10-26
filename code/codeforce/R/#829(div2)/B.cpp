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
	vector<int>an(n+1);
	int num=0;
	for(int i=1;i<=n/2;i++)an[i*2]=++num;
	for(int i=n/2+1;i<=n;i++)an[(i-n/2)*2-1]=++num;
	for(int i=1;i<=n;i++)cout<<an[i]<<" ";
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