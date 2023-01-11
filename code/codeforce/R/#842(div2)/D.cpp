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
int a[N],n;
void solve()
{
	cin>>n;
	int fl=0,num=n,ff=0;
	int nu=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		if(a[i]==i-1||a[i]==i+1)fl=1;
		if(a[i]==i)num--;
		if(a[a[i]]==i)nu++;
		
		// 存在互相位置相反，但是相邻的情况，要省下来一次
		if(a[a[i]]==i&&(a[i]==i+1||a[i]==i-1))ff=1;
	}
	num-=nu/2;
	if(ff)num+=1;
	if(fl)num-=2;
	else if(num==0)num=1;
	else if(num==n)num--;
	cout<<num<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}