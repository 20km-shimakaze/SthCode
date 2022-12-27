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
string s;
int n;
void solve()
{
	cin>>n>>s;
	s=" "+s;
	int x=0,y=0;
	for(int i=1;i<=n;i++){
		if(s[i]=='0')x++;
		else y++;
	}
	int ans=x*y;
	char c=s[1];
	int num=1;
	ans=max(ans,1ll);
	for(int i=2;i<=n;i++){
		if(s[i]==c){
			num++;
			ans=max(ans,num*num);
		}
		else num=1,c=s[i];
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}