#include<bits/stdc++.h>
using namespace std;
#define ll long long

void slove()
{
    int sum=1;
    for(int i=2;i<=8;i++){
        sum&=i;
        cout<<i<<"="<<sum<<"  ";
    }
}
int main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)slove();
}