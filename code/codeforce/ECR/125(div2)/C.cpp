#include<bits/stdc++.h>
using namespace std;
#define int long long
int ans,b,num;
char ss[500005];
void OK()
{
    if(ss[1]=='('&&ss[2]==')'){
        num=0;
        ans++;
    }
    else{
        for(int i=1;i<=num/2;i++){
            if(ss[i]!=ss[num-i+1])return;
        }
        ans++;
        num=0;
    }

}
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    num=0,b=0,ans=0;
    for(int i=0;i<n;i++){
        ss[++num]=s[i];
        if(num>=2)OK();
    }
    cout<<ans<<" "<<num<<endl;
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}