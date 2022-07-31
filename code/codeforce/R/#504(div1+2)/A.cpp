#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string s,t;
int n,m;
void solve()
{
    cin>>n>>m>>s>>t;
    int fl=0;
    for(int i=0;i<n;i++)if(s[i]=='*')fl=1;
    if(!fl){
        if(n!=m)puts("NO");
        else{
            int f=0;
            for(int i=0;i<n;i++){
                if(s[i]!=t[i])f=1;
            }
            if(!f)puts("YES");
            else puts("NO");
        }
        return;
    }
    if(n>m+1){
        puts("NO");
        return;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]=='*')break;
        if(s[i]!=t[i])flag=1;
    }
    for(int i=1;i<=n;i++){
        if(s[n-i]=='*')break;
        if(s[n-i]!=t[m-i])flag=1;
    }
    if(flag)puts("NO");
    else puts("YES");
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}