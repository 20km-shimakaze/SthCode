#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int n;
vector<int>a,b,ta,tb;
vector<int>cal(int t)
{
	vector<int>ans;
	for(int i=1;i*i<t;i++){
		if(t%i==0){
			ans.push_back(i);
			ans.push_back(t/i);
		}
	}
	return ans;
}
int check(int x,int y)
{
	for(int i=1;i<n;i++){
		int a1=(a[i]%x==0);
		int a2=(a[i]%y==0);
		int b1=(b[i]%x==0);
		int b2=(b[i]%y==0);
		if(a1&&b2)continue;
		if(a2&&b1)continue;
		return 0;
	}
	return 1;
}
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		a.push_back(x);
		b.push_back(y);
	}
	int lcm=1;
	ta=cal(a[0]);
	tb=cal(b[0]);
	for(int x:ta){
		for(int y:tb){
			if(check(x,y)){
				lcm=max(lcm,x*y/__gcd(x,y));
			}
		}
	}
	cout<<lcm<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}