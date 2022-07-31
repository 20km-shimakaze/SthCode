#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e4+7;
map<string,int>mp;
void solve()
{
	int n;
    cin>>n;
    string s;
    int maxx=0;
    string ans;
    for(int i=1;i<=n;i++){
        cin>>s;
        mp[s]++;
        if(mp[s]>maxx){
            maxx=mp[s];
            ans=s;
        }
    }
    cout<<ans<<endl;
}
signed  main()
{
	solve();
}