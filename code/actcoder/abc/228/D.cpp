#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define ll long long
ll a[1100006];
int xx[1100006];
ll q,t,x;
void swap(int &a,int &b)
{
    a=a^b;
    b=a^b;
    a=a^b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}