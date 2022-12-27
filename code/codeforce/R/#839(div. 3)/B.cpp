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
int a[2][2];
void fun()
{
	int t=a[0][0];
	a[0][0]=a[1][0];
	a[1][0]=a[1][1];
	a[1][1]=a[0][1];
	a[0][1]=t;
}
void solve()
{
	cin>>a[0][0]>>a[0][1]>>a[1][0]>>a[1][1];
	int fl=0;
	for(int i=1;i<=4;i++){
		fun();
		if(a[0][0]<a[0][1]&&a[1][0]<a[1][1]&&a[0][0]<a[1][0]&&a[0][1]<a[1][1])fl=1;
	}
	cout<<(fl?"YES":"NO")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}