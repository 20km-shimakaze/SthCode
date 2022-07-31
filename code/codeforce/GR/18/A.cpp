#include<bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    if(sum-(sum/n*n)==0){
        cout<<0<<endl;
    }
    else cout<<1<<endl;
    
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}