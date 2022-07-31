/*
n+1个小于n的值一定小于n*n所以直接除n*n就是答案
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int vis[30];
void solve()
{
	int n,s;
    cin>>n>>s;
    cout<<s/(n*n)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}