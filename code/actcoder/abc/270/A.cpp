#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int vis[4];
void f(int x)
{
	if(x==1)vis[1]=1;
	else if(x==2)vis[2]=1;
	else if(x==3)vis[1]=vis[2]=1;
	else if(x==4)vis[3]=1;
	else if(x==5)vis[1]=vis[3]=1;
	else if(x==6)vis[2]=vis[3]=1;
	else if(x==7)vis[1]=vis[2]=vis[3]=1;
}
void solve()
{
	int a,b;
	cin>>a>>b;
	f(a),f(b);
	int ans=0;
	if(vis[1])ans+=1;
	if(vis[2])ans+=2;
	if(vis[3])ans+=4;
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}