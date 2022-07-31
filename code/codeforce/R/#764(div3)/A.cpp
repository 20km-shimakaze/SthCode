#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[200005];
void solve()
{
	cin>>n;
    int maxx=INT_MIN,minn=INT_MAX;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxx=max(maxx,a[i]);
        minn=min(minn,a[i]);
    }
    cout<<maxx-minn<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}