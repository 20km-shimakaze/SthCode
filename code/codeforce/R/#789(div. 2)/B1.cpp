#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n;
    string s;
    cin>>n>>s;
    int ans=0,sum=1;
    for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            sum++;
            continue;
        }
        if(sum%2==0)sum=1;
        else{
            ans++;
            if(s[i]=='0')s[i]='1';
            else s[i]='0';
            sum=1;
            i++;
        }
    }
    //cout<<s<<endl;
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