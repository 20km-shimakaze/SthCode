#include <cstdio>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int ans=0;
int gcd(int a,int b)
{
    if(a<b)swap(a,b);
    while(b){
        int t=a%b;
        a=b;
        b=t;
        ans++;
    }
    return a;
}
int a[200005];
int main()
{
    int n;
    cin>>n;
    // for(int i=2;i<=n;i++){
    //     int x;cin>>x;
    //     a=gcd(a,x);
    //     cout<<a<<" "<<ans<<endl;
    // }
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int l=1,r=n;
    while(l<=r){
        int t=gcd(a[l],a[r]);
        if(t==1){
            ans+=r-l-1;
            break;
        }
        r--;
    }
    cout<<ans<<endl;
}
