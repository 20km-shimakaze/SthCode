/*
对答案二分= =
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int n,a,b;
int s[300005];
int check(int res)
{
    int t=0;
    for(int i=1;i<=n;i++){
        if(s[i]<res)t+=(res-s[i]+a-1)/a;
        if(s[i]>res)t-=(s[i]-res)/b;
    }
    return t>0;
}
void solve()
{
	cin>>n>>a>>b;
    for(int i=1;i<=n;i++)cin>>s[i];
    int l=0,r=1e9+7;
    int ans=0;
    while(l<=r){
        int mid=(l+r)>>1;
        if(check(mid))r=mid-1,ans=mid;
        else l=mid+1;
    }
    cout<<r<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}