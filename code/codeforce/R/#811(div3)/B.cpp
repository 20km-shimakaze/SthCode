/*
从前往后删，这样只需要从后往前查询，直到出现重复的即可
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n,a[200005],vis[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        vis[i]=0;
    }
    for(int i=n;i>=1;i--){
        if(vis[a[i]]){
            cout<<i<<endl;
            return;
        }
        vis[a[i]]++;
    }
    cout<<0<<endl;
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}