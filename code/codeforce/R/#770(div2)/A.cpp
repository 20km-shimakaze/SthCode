#include<bits/stdc++.h>
using namespace std;
int n,k;
string s;
void solve()
{
    cin>>n>>k;
    cin>>s;
    string st;
    for(int i=s.size()-1;i>=0;i--){
        st+=s[i];
    }
    if(k==0){
        cout<<1<<endl;
    }
    else if(s==st){
        cout<<1<<endl;
    }
    else cout<<2<<endl;
}
signed main()
{
    int __;
    cin>>__;
    while(__--)solve();
}