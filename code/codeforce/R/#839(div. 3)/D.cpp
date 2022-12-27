#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
int a[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int l=1,r=1e9;
	for(int i=2;i<=n;i++){
		if(a[i-1]<a[i]){
			int mid=(a[i]+a[i-1])/2;
			r=min(r,mid);
		}
		else if(a[i-1]>a[i])l=max(l,(a[i]+a[i-1]+1)/2);
	}
	// cout<<l<<"**"<<r<<endl;
	if(l<=r)cout<<l<<endl;
	else cout<<-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}