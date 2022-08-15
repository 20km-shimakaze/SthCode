#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,k;
int a[N],pos[N];
void solve()
{
	cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>a[i],pos[a[i]]=i;
    int ans=0;
    for(int i=1;i<=k;i++){
        if(a[i]>k)ans++;
    }
    // for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    // puts("");
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}