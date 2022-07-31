#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
set<string>se;
bool check(string s)
{
	return (s[0]==s[4]&&s[1]==s[3]);
}
void solve()
{
	string s;
	int x;
	cin>>s>>x;
	se.clear();
	int h=(s[0]-'0')*10+(s[1]-'0');
	int mi=(s[3]-'0')*10+(s[4]-'0');
	s[0]-='0';
	s[1]-='0';
	s[3]-='0';
	s[4]-='0';
	int ans=0;
	se.insert(s);
	//if(check(s))ans++;
	int th=x/60;
	int tm=x%60;
	while(1){
		int ah=(s[0])*10+s[1];
		int am=(s[3])*10+s[4];
		am+=tm;
		ah+=th+am/60;
		am%=60;
		ah%=24;
		s[0]=ah/10;
		s[1]=ah%10;
		s[3]=am/10;
		s[4]=am%10;
		//cout<<ah<<":"<<am<<endl;
		if(check(s)){
			ans++;
		}
		if(se.count(s))break;
		// string st=s;
		// st[0]+='0';
		// st[1]+='0';
		// st[3]+='0';
		// st[4]+='0';
		// cout<<st<<endl;
		se.insert(s);
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}