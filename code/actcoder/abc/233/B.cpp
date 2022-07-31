#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e4+7;
map<string,int>mp;
void solve()
{
	int l,r;
    string s,s1;
    cin>>l>>r>>s;
    l--;
    r--;
    for(int i=0;i<l;i++){
        s1+=s[i];
    }
    for(int i=r;i>=l;i--){
        s1+=s[i];
    }
    for(int i=r+1;i<s.size();i++){
        s1+=s[i];
    }
    cout<<s1<<endl;
}
signed  main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)
	solve();
}