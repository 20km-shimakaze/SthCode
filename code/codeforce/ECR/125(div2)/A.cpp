#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int x,y;
	cin>>x>>y;
	if(x==y&&x==0){
		cout<<0<<endl;
		return;
	}
	if(x*x+y*y==(int)sqrt(x*x+y*y)*(int)sqrt(x*x+y*y))cout<<1<<endl;
	else cout<<2<<endl;
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}