#include<bits/stdc++.h>
using namespace std;
int a,b;
void slove()
{
    cin>>a>>b;
    int ans=(a+b)/4;
    ans=min(ans,a);
    ans=min(ans,b);
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)slove();
}