#include<bits/stdc++.h>
//#define int long long
using namespace std;
const int maxn=1e4+7;
void solve()
{
	int n,q,x;
    int a[200005];
    cin>>n>>q;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=q;i++){
        cin>>x;
        int dis=lower_bound(a+1,a+1+n,x)-a;
        cout<<n-dis+1<<endl;
    }
}
signed  main()
{
	solve();
}