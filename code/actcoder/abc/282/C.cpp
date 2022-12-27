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
int n,vis[N];
void solve()
{
	cin>>n>>s;
	int fl=0;
	for(int i=0;i<n;i++){
		if(s[i]=='"'&&fl==0)fl=1;
		else if(fl==0&&s[i]==',')s[i]='.';
		else if(fl==1&&s[i]=='"')fl=0;
	}
	cout<<s<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}