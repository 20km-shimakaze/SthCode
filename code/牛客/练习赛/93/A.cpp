#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
ll x,y,a,b,c;
void slove()
{
	cin>>x>>y>>a>>b>>c;
    cout<<max(x*y,a+b)+c<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--){
		slove();
	}
	return 0;
}