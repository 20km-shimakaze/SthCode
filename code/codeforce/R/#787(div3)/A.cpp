/*
计算食物缺口，然后看通用的能不能补全
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int long long
void solve()
{
	int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int t=max(0,x-a)+max(0,y-b);
    if(c>=t)puts("YES");
    else puts("NO");
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}