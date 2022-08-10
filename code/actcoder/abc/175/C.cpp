#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int x,k,d;
void solve()
{
	cin>>x>>k>>d;
    x=abs(x);
    int t=x/d;
    if(k<=t){
        cout<<x-k*d<<endl;
    }
    else{
        int tt=(k-t)%2;
        cout<<abs(x-t*d-tt*d)<<endl;
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}