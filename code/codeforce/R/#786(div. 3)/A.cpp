/*
直接贪心，如果a不是b的因数直接不可能构造成功
否则构造成 b/a*a的形式
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int a,b;
    cin>>a>>b;
    if(b%a){
        cout<<"0 0"<<endl;
        return;
    }
    cout<<1<<" "<<b/a<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}