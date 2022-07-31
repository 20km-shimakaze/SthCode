#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int aa[103];
void solve()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	for(int i=a+1;i<=b;i++)aa[i]++;
	for(int i=c+1;i<=d;i++)aa[i]++;
	int ans=0;
	for(int i=0;i<=100;i++)if(aa[i]==2)ans++;
	cout<<ans<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}