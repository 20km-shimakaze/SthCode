#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct poi
{
	int a,b;
}s[N];
int st[N];
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>s[i].a;
	for(int i=1;i<=n;i++)cin>>s[i].b;
	sort(s+1,s+1+n,[&](poi a,poi b){
		return a.a<b.a;
	});
	int ans=n;
	int len=0;
	// for(int i=1;i<=n;i++)cout<<s[i].b<<" ";
	for(int i=1;i<=n;i++){
		int x=s[i].b;
		int di=lower_bound(st+1,st+1+len,x)-st;
		if(di>len)st[++len]=x;
		else st[di]=x;
		// cout<<di<<endl;
	}
	cout<<ans+len<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}