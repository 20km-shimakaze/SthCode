/*
直接把中间相同的个数加起来
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
string s;
void solve()
{
	char c;
    cin>>n>>s;
    c=s[s.size()/2];
    int ans=0;
    for(int i=s.size()/2;i<=s.size()-1;i++){
        if(s[i]!=c)break;
        ans++;
    }
    for(int i=s.size()/2;i>=0;i--){
        if(s[i]!=c)break;
        ans++;
    }
    cout<<ans-1<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}