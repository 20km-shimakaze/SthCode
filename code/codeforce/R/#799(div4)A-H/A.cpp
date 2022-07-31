#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int su=0;
	if(b>a)su++;
	if(c>a)su++;
	if(d>a)su++;
	cout<<su<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}