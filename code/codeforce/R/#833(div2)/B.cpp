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
string s;
int vis[12];
void solve()
{
	cin>>n>>s;
	int ans=0;
	for(int i=0;i<n;i++){
		memset(vis,0,sizeof vis);
		set<char>se;
		for(int j=i;j<n;j++){
			se.insert(s[j]);
			vis[s[j]-'0']++;
			int num=0;
			for(int i=0;i<10;i++)num=max(num,vis[i]);
			if(num>10)break;
			if(se.size()>=num)ans++;
		}
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