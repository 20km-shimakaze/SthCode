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
string s;
void solve()
{
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	cin>>s;
	map<int,char>mp;
	for(int i=0;i<n;i++){
		if(mp.count(a[i])){
			if(mp[a[i]]!=s[i]){
				cout<<"NO"<<endl;
				return;
			}
		}
		else mp[a[i]]=s[i];
	}
	cout<<"YES"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}