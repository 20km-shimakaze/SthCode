#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
/*
无论如何，只要s大于三或者等于11 00就一定不可能，因为总是有长度为2或者3的回文串
*/
#define int long long
void solve()
{
	string s;
    int n;
    cin>>n>>s;
    if(s=="10"||s=="01"||s=="1"||s=="0")puts("YES");
    else puts("NO");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}