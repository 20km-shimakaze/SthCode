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
int n,a[N];
void solve()
{
	cin>>n;
	int sum=0;
	int ans=INF;
	for(int i=1;i<=n;i++){
		cin>>a[i],sum+=a[i];
		if(a[i]&1){
			int num=0;
			int t=a[i];
			while(t&1)t/=2,num++;
			ans=min(ans,num);
		}
		else{
			int num=0;
			int t=a[i];
			while(t%2==0)t/=2,num++;
			ans=min(ans,num);
		}
	}
	if(sum%2==0)ans=0;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}