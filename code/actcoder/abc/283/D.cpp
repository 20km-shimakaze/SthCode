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
int vis[30];
void solve()
{
	string s;
	stack<char>st;
	cin>>s;
	for(char c:s){
		// cout<<c<<endl;
		if(c>='a'&&c<='z'){
			if(vis[c-'a']){
				cout<<"No"<<endl;
				return;
			}
			st.push(c),vis[c-'a']++;
		}
		if(c=='(')st.push(c);
		if(c==')'){
			while(st.size()&&st.top()!='(')vis[st.top()-'a']--,st.pop();
			st.pop();
		}
	}
	cout<<"Yes"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}