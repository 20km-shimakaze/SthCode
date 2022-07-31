#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	string s;
    int ans=0;
    int n,k;
    cin>>n>>k>>s;
    int a1=-1,a2=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1')ans++;
    }
    if(ans==0){
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            a1=i;
            break;
        }
    }
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]=='1'){
            a2=s.size()-i-1;
            break;
        }
    }
    if(k>=a1+a2&&a1+a2!=n-1)cout<<ans*11-11<<endl;
    else if(k>=a2)cout<<ans*11-10<<endl;
    else if(k>=a1)cout<<ans*11-1<<endl;
    else cout<<ans*11<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}