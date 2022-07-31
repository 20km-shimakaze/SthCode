#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,a[200005],m,b[200005];
void solve()
{
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int ans=0;
    for(int i=1;i<=m;i++){
        cin>>b[i];
        ans+=b[i];
        ans%=n;
    }
    ans%=n;
    // cout<<"******"<<endl;
    // cout<<ans<<endl;
    cout<<a[ans]<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}