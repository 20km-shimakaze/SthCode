#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int vis[N];
void solve()
{
	int ans=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k,t;
        cin>>t>>k;
        int fl=0;
        for(int j=1;j<=k;j++){
            int x;
            cin>>x;
            if(!vis[x])fl=1;
        }
        if(!fl)vis[i]=1,ans+=t;
    }
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}