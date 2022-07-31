#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a,b;
int aa[200],bb[200];
void slove()
{
    cin>>n;
    a=0,b=0;
    for(int i=1;i<=n;i++){
        if(i&1){
            cin>>aa[++a];
        }
        else cin>>bb[++b];
    }
    int ga=aa[1],gb=bb[1];
    for(int i=1;i<=a;i++){
        ga=__gcd(ga,aa[i]);
    }
    for(int i=1;i<=b;i++){
        gb=__gcd(gb,bb[i]);
    }
    // cout<<"&"<<a<<" "<<b<<endl;
    // cout<<"*"<<ga<<" "<<gb<<endl;
    if(ga==1&&gb==1){
        cout<<0<<endl;
        return;
    }
    if(ga!=1){
        int flag=0;
        for(int i=1;i<=b;i++){
            if(bb[i]%ga==0){
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<ga<<endl;
            return;
        }
    }
    if(gb!=1){
        int flag=0;
        for(int i=1;i<=a;i++){
            if(aa[i]%gb==0){
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<gb<<endl;
            return;
        }
    }
    cout<<0<<endl;
}
signed main()
{
    int __;
    cin>>__;
    while(__--)slove();
}