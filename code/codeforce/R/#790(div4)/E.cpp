#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,q;
int a[200005];
int su[200005];
bool cmp(int a1,int a2)
{
    return a1>a2;
}
void solve()
{
	cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    su[0]=0;
    for(int i=1;i<=n;i++){
        su[i]=su[i-1]+a[i];
    }
    int x;
    for(int i=1;i<=q;i++){
        cin>>x;
        int ans=lower_bound(su+1,su+1+n,x)-su;
        if(ans>n)ans=-1;
        cout<<ans<<endl;
    }
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}