#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N = 600 + 10;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int t =(a-1)^(b-1)^(c-1);
    if(t)puts("Win");
    else puts("Lose");
}

signed main()
{
    int T;cin>>T;
    while (T--) solve();
	return 0;
}