#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
void solve()
{
	int n;
	cin>>n;
	int ansx=n,ansy=n,lx=1,rx=n,ly=1,ry=n;
	while(lx<rx){
		int mid=(lx+rx)/2;
		cout<<"? "<<lx<<" "<<mid<<" 1 "<<n<<endl;
		int x;
		cin>>x;
		if(x==mid-lx+1)lx=mid+1;
		else rx=mid,ansx=mid;
	}
	while(ly<ry){
		int mid=(ly+ry)/2;
		cout<<"? "<<1<<" "<<n<<" "<<ly<<" "<<mid<<endl;
		int x;
		cin>>x;
		if(x==mid-ly+1)ly=mid+1;
		else ry=mid,ansy=mid;
	}
	cout<<"! "<<ansx<<" "<<ansy<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}