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
    int sum=0,maxx=LLONG_MIN;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        maxx=max(maxx,a[i]);
        sum+=a[i];
    }
    if(maxx==0)cout<<0<<endl;
    else if(2*maxx<=sum)cout<<1<<endl;
    else cout<<2*maxx-sum<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}