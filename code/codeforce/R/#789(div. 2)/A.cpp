#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[103];
int vis[103];
void solve()
{
	cin>>n;
    int sum=0;
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        cin>>a[i];
        vis[a[i]]++;
    }
    for(int i=1;i<=100;i++){
        if(vis[i]>=2)sum++;
    }
    if(vis[0])cout<<n-vis[0]<<endl;
    else if(sum)cout<<n<<endl;
    else cout<<n+1<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}