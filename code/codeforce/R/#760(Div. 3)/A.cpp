#include<bits/stdc++.h>
using namespace std;
#define ll long long
void slove()
{
    int a[10];
    for(int i=1;i<=7;i++){
        cin>>a[i];
    }
    cout<<a[1]<<" "<<a[2]<<" "<<a[7]-a[1]-a[2]<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}