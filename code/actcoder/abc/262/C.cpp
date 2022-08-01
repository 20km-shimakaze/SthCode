#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,a[500005];
void solve()
{
	cin>>n;
    int su=0,ans=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        if(a[i]==i)su++;
        else if(a[a[i]]==i)ans++;
    }
    ans/=2;
    ans+=su*(su-1)/2;
    cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}