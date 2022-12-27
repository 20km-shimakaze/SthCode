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
int query(int a,int b)
{
	cout<<"? "<<a<<" "<<b<<endl;
	int t;
	cin>>t;
	return t;
}
void solve()
{	
	int n;
	cin>>n;
	int x=1,y=2;
	int g=query(x,y);
	for(int i=3;i<=n;i++){
		int xx=query(x,i);
		int yy=query(y,i);
		if(xx==max({xx,yy,g})){
			y=i;
			g=xx;
		}
		else if(yy==max({xx,yy,g})){
			x=i;
			g=yy;
		}
	}
	cout<<"! "<<x<<" "<<y<<endl;
	int res;
	cin>>res;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}