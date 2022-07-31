#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string s[53];
void init()
{
    string t="0110";
    string t1="1001";
    for(int i=1;i<=14;i++)s[0]+=t,s[1]+=t1,s[2]+=t1,s[3]+=t;
    for(int i=0;i<=50;i+=4)s[i]=s[0],s[i+1]=s[1],s[i+2]=s[1],s[i+3]=s[0];
}
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<s[i-1][j-1]<<" ";
        }
        puts("");
    }
}
signed main()
{
	int __=1;
	cin >> __;
    init();
	while (__--)
		solve();
}