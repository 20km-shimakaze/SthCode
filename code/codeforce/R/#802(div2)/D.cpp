#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int su[200005];
int n,m;
int a[200005];
int ti[200005];
int rsu[200005];
int rti[200005];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        su[i]=su[i-1]+a[i];
    }
    for(int i=n;i>=1;i--){
        rsu[i]=a[i]+rsu[i+1];
    }
    for(int i=1;i<=n;i++){
        ti[i]=max(ti[i-1],(int)ceil(1.0*su[i]/i));
    }
    for(int i=1;i<=n;i++){
        ti[i]=max(ti[i],(int)ceil(1.0*rsu[1]/i));
    }
    cin>>m;
    int t;
    for(int i=1;i<=n;i++){
        rti[n-i+1]=ti[i];
    }
    // for(int i=1;i<=n;i++){
    //     cout<<ti[i]<<" ";
    // }
    // puts("");
    while(m--){
        cin>>t;
        int dis=upper_bound(rti+1,rti+1+n,t)-rti;
        dis--;
        int ans=n-dis+1;
        if(dis<=0){
            ans=-1;
        }
        cout<<ans<<endl;
    }
}
signed main()
{
	int __;
	//cin >> __;
	__=1;
	while (__--)
		solve();
}