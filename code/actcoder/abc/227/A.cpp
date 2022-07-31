#include<iostream>
#include<cstdio>
using namespace std;
void slove()
{
    int n,k,a;
    cin>>n>>k>>a;
    int ans=0,t;
    t=k%n;
    ans=a+t;
    ans=(ans-1)%n;
    if(ans==0)ans=n;
    cout<<ans<<endl;
}
int main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)slove();
}