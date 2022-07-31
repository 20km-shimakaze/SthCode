#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int a,b;
	string s;
	cin>>a>>b;
	if(a<b){
		for(int i=1;i<=b;i++){
			if(a)s+='0',a--;
			s+='1';
		}
	}
	else {
		for(int i=1;i<=a;i++){
			if(b)s+='1',b--;
			s+='0';
		}
	}
	cout<<s<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}