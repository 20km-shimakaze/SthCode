#include<bits/stdc++.h>
using namespace std;
#define int long long
int l,r,k;
void slove()
{
    string ans="YES";
    cin>>l>>r>>k;
    if(l==r){
        if(l==1)ans="NO";
    }
    else{
        int n=(r-l+l%2+r%2)/2;
        if(k<n)ans="NO";
    }
    cout<<ans<<endl;
}
signed main()
{
    
    int __;
    cin>>__;
    while(__--)slove();
}