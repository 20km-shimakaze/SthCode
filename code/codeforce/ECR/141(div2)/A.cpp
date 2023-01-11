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
int n;
int a[N];
int check()
{
	int sum=a[1];
	for(int i=2;i<=n;i++){
		if(sum==a[i])return 0;
		sum+=a[i];
	}
	return 1;
}
void solve()
{
	cin>>n;
	int fl=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n,[&](int a,int b){
		return a>b;
	});
	fl|=check();
	if(fl){
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
		return;
	}
	swap(a[1],a[n]);
	fl|=check();
	if(!fl)cout<<"NO"<<endl;
	else{
		cout<<"YES"<<endl;
		for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<endl;
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}