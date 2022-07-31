#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n,x,ans=0,minn=INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        ans+=x;
        minn=min(minn,x);
    }
    cout<<ans-minn*n<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}