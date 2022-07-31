#include<bits/stdc++.h>
using namespace std;
int a;
int s[100];
void slove()
{
    cin>>a;
    memset(s,0,sizeof(s));
    int tt=a,flag=0,f2=0;
    if(a%2==0){
        cout<<0<<endl;
        return;
    }
    int len=0;
    while(tt){
        s[++len]=tt%10;
        tt/=10;
    }
    for(int i=1;i<=len;i++){
        if(s[i]%2==0)flag=1;
    }
    if(flag){
        if(s[len]%2==0){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    else cout<<-1<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)slove();
}