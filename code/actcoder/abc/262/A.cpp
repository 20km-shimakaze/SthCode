#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
void solve()
{
	int n;
    cin>>n;
    if(n%4==2)cout<<n<<endl;
    else if(n%4==3)cout<<n+3<<endl;
    else if(n%4==0)cout<<n+2<<endl;
    else if(n%4==1)cout<<n+1<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}