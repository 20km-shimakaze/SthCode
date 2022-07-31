#include<iostream>
using namespace std;
#define ll long long
//#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
int n;
int a[400005];
void slove()
{
    cin>>n;
    int x=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        x^=a[i];
    }
    int flag=0;
    for(int i=1;i<=n;i++){
        if(a[i]==x)flag=1;
    }
    if(n%2){
        cout<<"Win"<<endl;
        return;
    }
    if(flag)cout<<"Win"<<endl;
    else cout<<"Lose"<<endl;
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