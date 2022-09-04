#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int su[N];
int n,m,a[N];
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        su[i]=su[i-1]+a[i];
    }
    int ans=0;
    int num=0;
    for(int i=1;i<=m;i++){
        num+=i*a[i];
    }
    ans=num;
    //cout<<ans<<endl;
    for(int i=2;i<=n-m+1;i++){
        int sum=su[i+m-2]-su[i-2];
        num=num-sum+m*a[i+m-1];
        ans=max(ans,num);
        //cout<<sum<<" "<<num<<" "<<ans<<endl;
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