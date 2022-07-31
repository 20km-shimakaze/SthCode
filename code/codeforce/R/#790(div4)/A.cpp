#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string s;
    cin>>s;
    int a1=0,a2=0;
    for(int i=0;i<3;i++){
        a1+=s[i]-'0';
    }
    for(int i=3;i<6;i++){
        a2+=s[i]-'0';
    }
    if(a1==a2)puts("YES");
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