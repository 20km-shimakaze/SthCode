#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n;
string s;
void solve()
{
	cin>>n>>s;
	int nn=n;
	int ans=0;
	if(s=="Alice"){
		n-=3;
		ans++;
		if(n>0){
			ans+=(n/7)*3;
			n%=7;
			if(n>=1&&n<=2)ans++;
			else if(n>=3&&n<=4)ans+=2;
			else if(n>=5)ans+=3;
		}
	}
	else{
		ans+=(n/7)*3;
		n%=7;
		if(n>=1&&n<=2)ans++;
		else if(n>=3&&n<=4)ans+=2;
		else if(n>=5)ans+=3;
	}
	//if(nn==1&&s=="Alice")ans++;
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