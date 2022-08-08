#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
void solve()
{
	string s,t;
    cin>>s>>t;
    int an=1e9;
    int n=s.size(),m=t.size();
    for(int i=0;i<=n-m;i++){
        int num=0;
        for(int j=0;j<t.size();j++){
            if(s[i+j]!=t[j])num++;
        }
        an=min(an,num);
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