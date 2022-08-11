#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int h,w,k;
int a[N],b[N];
void solve()
{
	cin>>h>>w>>k;
	int sua=0,sub=0;
	for(int i=1;i<=h;i++)cin>>a[i],sua+=a[i],sua%=k;
	for(int i=1;i<=w;i++)cin>>b[i],sub+=b[i],sub%=k;
	if(sua!=sub){
		cout<<-1<<endl;
		return;
	}
	int ta=(k-1)*w%k;
	int tb=(k-1)*h%k;
	int ana=0,anb=0;
	for(int i=1;i<=h;i++){
		ana+=(ta-a[i]+k)%k;
	}
	for(int i=1;i<=w;i++){
		anb+=(tb-b[i]+k)%k;
	}
	cout<<h*w*(k-1)-max(ana,anb)<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}