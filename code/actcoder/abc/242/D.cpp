#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
string s;
int q;
char g(char c,int p)
{
    return (c-'A'+p)%3+'A';
}
char f(int t,int k)
{
    if(!t)return s[k];
    if(!k)return g(s[0],t%3);
    return g(f(t-1,k>>1),(k&1)+1);
}
void solve()
{
	cin>>s>>q;
    while(q--){
        int t,k;
        cin>>t>>k;
        cout<<f(t,k-1)<<endl;
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}