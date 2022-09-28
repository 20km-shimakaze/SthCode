#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,k,p[N],a[N];
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i],p[i]=a[i];
	sort(a+1,a+1+n);
	int sum=0;
	while(k){
		int dis=upper_bound(a+1,a+1+n,sum)-a;
		int x=a[dis]-sum;
		int len=n-dis+1;
		if(x*len>k){
			int st=k/len;
			sum+=st;
			k-=len*st;
			break;
		}
		else k-=x*len,sum+=x;
	}
	for(int i=1;i<=n;i++){
		if(p[i]<=sum)cout<<0<<" ";
		else if(k)cout<<p[i]-sum-1<<" ",k--;
		else cout<<p[i]-sum<<" ";
	}

}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}