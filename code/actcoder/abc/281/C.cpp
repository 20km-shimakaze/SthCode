#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n,t,s[N],su[N];
void solve()
{
	cin>>n>>t;
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
		sum+=s[i];
	}
	t%=sum;
	for(int i=0;i<n;i++){
		if(t<=s[i]){
			cout<<i+1<<" "<<t<<endl;
			return;
		}
		t-=s[i];
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