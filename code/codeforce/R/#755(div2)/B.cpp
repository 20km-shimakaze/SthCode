#include<bits/stdc++.h>
using namespace std;
void slove()
{
    int n,m;
    cin>>n>>m;
    if(n>m){
        int t=m;
        m=n;
        n=t;
    }//n<m
    int ans=0;
    ans+=(n/3)*m;
    n%=3;
    ans+=(m/3)*n;
    m%=3;
    if(m==0||n==0){
        cout<<ans<<endl;
    }
    else if(m==2){
        if(n==1){
            cout<<ans+  1<<endl;
        }
        else cout<<ans+2<<endl;
    }
    else{
        if(n==1){
            cout<<ans+1<<endl;
        }
        else {
            cout<<ans+1<<endl;
        }
    }
}
int main()
{
    int __;cin>>__;
    while(__--)slove();
}