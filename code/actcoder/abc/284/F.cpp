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
string s,t;
int vis[30];
void solve()
{
	cin>>n>>s;
	for(char c:s)vis[c-'a']++;
	for(int i=0;i<26;i++){
		if(vis[i]%2){
			cout<<-1<<endl;
			return;
		}
	}
	for(int i=0;i<=n;i++){
		int di=2*n-1,fl=1,ff=0;
		for(int j=i;j<i+n;j++){
			if(di==i+n-1)di-=n;
			if(s[di]!=s[j]){
				ff=1;
				break;
			}
			di--;
		}
		if(!ff){
			for(int j=i+n-1;j>=i;j--){
				cout<<s[j];
			}
			cout<<endl;
			cout<<i<<endl;
			return;
		}
	}
	cout<<-1<<endl;
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}