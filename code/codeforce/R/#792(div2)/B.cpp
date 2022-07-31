/*
直接构造
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    z=c;
    y=z+b;
    x=y+a;
    cout<<x<<" "<<y<<" "<<z<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}