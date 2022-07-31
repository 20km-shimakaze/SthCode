#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
void slove()
{
	int n;
    cin>>n;
    cout<<"AGC";
    if(n<10){
        cout<<"00"<<n;
    }
    else if(n<42){
        cout<<"0"<<n;
    }
    else cout<<"0"<<n+1;
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