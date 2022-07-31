#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int s[203][203],a[403],b[403];
int n,m;
void solve()
{
	cin>>n>>m;
    memset(s,0,sizeof(s));
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    int mi1=-1,mi2=-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            a[i-j+200]+=s[i][j];
            b[i+j]+=s[i][j];
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans=max(ans,a[i-j+200]+b[i+j]-s[i][j]);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}