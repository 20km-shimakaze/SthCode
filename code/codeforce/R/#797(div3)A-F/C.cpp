#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int l[200005],r[200005];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>l[i];
	for(int i=1;i<=n;i++)cin>>r[i];
	int ti=0;
	for(int i=1;i<=n;i++){
		if(l[i]>=ti)ti=l[i];
		else l[i]=ti;
		int an=r[i]-l[i];
		if(an<=0)an=0;
		cout<<an<<" ";
		if(ti<r[i])ti=r[i];
	}
	puts("");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}