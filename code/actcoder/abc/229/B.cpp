#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
void slove()
{
	ll a,b;
	cin>>a>>b;
	while(a&&b){
		if((a%10)+(b%10)>=10){
			cout<<"Hard"<<endl;
			return;
		}
		a/=10;
		b/=10;
	}
	cout<<"Easy"<<endl;
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--){
		slove();
	}
	return 0;
}
//暴力求每一位是否进位，两个位数相加大于10就是进位