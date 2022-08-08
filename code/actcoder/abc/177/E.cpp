#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
int n,a[N];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int t=__gcd(a[1],a[2]);
    int ma=t,mi=t;
    for(int i=2;i<n;i++){
        int t1=__gcd(a[i],a[i+1]);
        ma=max(ma,t1);
        mi=min(mi,t1);
    }
    //cout<<mi<<" "<<ma<<endl;
    if(mi==ma&&mi==1)puts("pairwise coprime");
    else if(mi!=ma)puts("setwise coprime");
    else puts("not coprime");
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}