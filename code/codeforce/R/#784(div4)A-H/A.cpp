/*
直接判断输出答案
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n;
    cin>>n;
    if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    else if(n<=1599){
        cout<<"Division 3"<<endl;
    }
    else if(n<=1899){
        cout<<"Division 2"<<endl;
    }
    else{
        cout<<"Division 1"<<endl;
    }
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}