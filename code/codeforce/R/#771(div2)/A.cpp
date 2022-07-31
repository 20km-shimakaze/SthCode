#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
struct poi
{
    int a,b;
}a[103];
bool cmp(poi a,poi b)
{
    return a.a<b.a;
}
void slove()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i].a;
    }
    for(int i=1;i<=n;i++){
        cin>>a[i].b;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++){
        if(k<a[i].a)break;
        k+=a[i].b;
    }
    cout<<k<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}