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
void solve()
{
	string s;
	cin>>s;
	if(s[0]==s.back()){
		cout<<s[0]<<" ";
		for(int i=1;i<s.size()-1;i++)cout<<s[i];cout<<" ";
		cout<<s.back()<<endl;
	}
	else if(s[0]=='a'){
		if(s[1]=='a'){
			cout<<s[0]<<" ";
			cout<<s[1]<<" ";
			for(int i=2;i<s.size();i++)cout<<s[i];
			cout<<endl;
		}
		else{
			cout<<s[0]<<" ";
			for(int i=1;i<s.size()-1;i++)cout<<s[i];
			cout<<" ";
			cout<<s.back()<<endl;
		}
	}
	else if(s[0]=='b'){
		if(s[1]=='b'){
			cout<<s[0]<<" ";
			for(int i=1;i<s.size()-1;i++)cout<<s[i];cout<<" ";
			cout<<s.back()<<endl;
		}
		else{
			cout<<s[0]<<" ";
			cout<<s[1]<<" ";
			for(int i=2;i<s.size();i++)cout<<s[i];
			cout<<endl;
		}
	}
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}