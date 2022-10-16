#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
string s[N];
void solve()
{
	for(int i=0;i<8;i++)cin>>s[i];
	for(int i=0;i<8;i++){
		int r=0,b=0;
		for(int j=0;j<8;j++){
			if(s[i][j]=='.')r=1,b=1;
			if(s[i][j]=='R')b=1;
			if(s[i][j]=='B')r=1;
		}
		if(!r){
			cout<<"R"<<endl;
			return;
		}
		if(!b){
			cout<<"B"<<endl;
			return;
		}
	}
	for(int i=0;i<8;i++){
		int r=0,b=0;
		for(int j=0;j<8;j++){
			if(s[j][i]=='.')r=1,b=1;
			if(s[j][i]=='R')b=1;
			if(s[j][i]=='B')r=1;
		}
		if(!r){
			cout<<"R"<<endl;
			return;
		}
		if(!b){
			cout<<"B"<<endl;
			return;
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