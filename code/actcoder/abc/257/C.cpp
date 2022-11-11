#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct poi
{
	int we,num;
}t[N];
int a[N],b[N];
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	for(int i=1;i<=n;i++){
		cin>>t[i].we;
		t[i].num=s[i-1]-'0';
	}
	sort(t+1,t+1+n,[&](poi a,poi b){
		if(a.we==b.we)return a.num>b.num;
		return a.we>b.we;
	});
	for(int i=1;i<=n;i++){
		if(t[i].num==0)b[i]++;
		else a[i]++;
		a[i]+=a[i-1];
		b[i]+=b[i-1];
	}
	// for(int i=1;i<=n;i++){
		// cout<<t[i].we<<" "<<t[i].num<<endl;
	// }cout<<endl;
	// for(int i=1;i<=n;i++){
		// cout<<a[i]<<" ";
	// }cout<<endl;
	// for(int i=1;i<=n;i++){
		// cout<<b[i]<<" ";
	// }cout<<endl;
	int ans=b[n];
	for(int i=1;i<=n;i++){
		if(t[i].we==t[i+1].we)continue;
		ans=max(ans,a[i]+b[n]-b[i]);
		// cout<<a[i]+b[n]-b[i]<<" ";
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