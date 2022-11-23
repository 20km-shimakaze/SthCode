#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N];
void solve()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[0]=INT_MAX;
	a[n+1]=INT_MAX;
	int fl=-1,flag=0;
	for(int i=1;i<=n;i++){
		if(a[i]>a[i-1]&&fl==-1){
			fl=0;
			continue;
		}
		if(fl==-1&&a[i-1]<a[i])flag=1;
		if(fl==0&&a[i-1]>a[i])flag=1;
	}
	cout<<(flag?"NO":"YES")<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}