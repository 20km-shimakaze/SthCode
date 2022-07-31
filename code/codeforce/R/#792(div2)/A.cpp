/*
看数字里面最小的数字，特判答案为2的时候
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	string s;
    cin>>s;
    if(s.size()==2){
        cout<<s[1]<<endl;
        return;
    }
    char c=100;
    for(int i=0;i<s.size();i++){
        c=min(c,s[i]);
    }
    cout<<c<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}