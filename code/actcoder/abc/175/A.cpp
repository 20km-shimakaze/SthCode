#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
void solve()
{
	string s;
    cin>>s;
    int t=0,an=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='R')t++,an=max(an,t);
        else t=0;
    }
    cout<<an<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}