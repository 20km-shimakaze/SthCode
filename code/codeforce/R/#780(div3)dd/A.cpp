#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int a,b;
void solve()
{
	cin>>a>>b;
    if(a==0){
        cout<<1<<endl;
    }
    else cout<<a+b*2+1<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}