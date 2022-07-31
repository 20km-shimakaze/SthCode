#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int n;
    cin>>n;
    int a,b,c;
    b=n/3;
    a=b+1;
    c=n-a-b;
    if(c>=b)c--,a++;
    if(c>=b)c--,b++;
    cout<<b<<" "<<a<<" "<<c<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}