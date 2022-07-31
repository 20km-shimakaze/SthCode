#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,a[200005];
void solve()
{
    int ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t=0;
    for(int i=1;i<n;i++){
        ans+=abs(a[i]-a[i+1]);
        if(a[i]-a[i+1]<0)t+=abs(a[i]-a[i+1]);
    }
    t-=a[n];
    t=abs(t);
    cout<<ans+t<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}