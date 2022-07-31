#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	string s;
    cin>>s;
    int a=0,b=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')a++;
        else b++;
    }
    if(a==b){
        cout<<a-1<<endl;
    }
    else cout<<min(a,b)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}