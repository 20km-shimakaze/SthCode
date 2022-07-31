#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
const int MAXN=2e5+5;
int a[MAXN],n,x;
void solve()
{
	cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int maxx=LLONG_MIN,minn=LLONG_MAX,ans=0;
    for(int i=1;i<=n;i++){
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }
    for(int i=1;i<n;i++){
        ans+=abs(a[i]-a[i+1]);
    }
    int p=0,q=0;
    if(maxx<x){
        p=min(abs(x-maxx)*2,min(abs(x-a[1]),abs(x-a[n])));
    }
    q=min(abs(1-minn)*2,min(abs(1-a[1]),abs(1-a[n])));
    cout<<ans+p+q<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}