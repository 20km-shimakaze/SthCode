#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int x;
void solve()
{
	cin>>x;
	int n=0;
	int xx=x;
	while(xx)n++,xx/=10;
	int ans=LLONG_MAX,maxx=0;
	for(int i=1;i<=n+1;i++)maxx*=10,maxx+=1;
	for(int i=1;i<=9;i++){
		for(int j=-8;j<=8;j++){
			int t=i;
			int fl=0;
			for(int k=1;k<n;k++){
				int t1=j*k+i;
				if(t1<0||t1>9){
					fl=1;
					break;
				}
				t*=10;
				t+=t1;
			}
			if(!fl&&t>=x)ans=min(t,ans);
		}
	}
	if(ans==LLONG_MAX)cout<<maxx<<endl;
	else cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}