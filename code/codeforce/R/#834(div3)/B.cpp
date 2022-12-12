#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,m;
int a[N];
void solve()
{
	int sum=0;
	cin>>n>>m;
	int maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum+=a[i];
		maxx=max(maxx,a[i]);
	}
	m-=(1+maxx)*maxx/2-sum;
	if(m<0){
		cout<<"NO"<<endl;
		return;
	}
	sum=(1+maxx)*maxx/2;
	int l=1,r=100;
	int ans=0;
	while(l<=r){
		int mid=(l+r)/2;
		int num=(1+mid)*mid/2;
		if(num<=m+sum)ans=mid,l=mid+1;
		else r=mid-1;
	}
	if(ans*(ans+1)/2==sum+m)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}