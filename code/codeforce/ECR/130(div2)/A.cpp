#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
const int maxn=1e5;
void solve()
{
    int sum=0,n,m;
    cin>>n>>m;
    int x;
    for(int i=1;i<=n;i++){
        cin>>x;
        sum+=x;
    }
    if(sum>m)cout<<sum-m<<endl;
    else cout<<0<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}