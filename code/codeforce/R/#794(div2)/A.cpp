#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[200];
void solve()
{
    int sum=0;
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int fl=0;
    for(int i=1;i<=n;i++){
        if(a[i]*n==sum)fl=1;
    }
    if(fl)puts("YES");
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