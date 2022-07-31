#include<bits/stdc++.h>
using namespace std;
struct poi{
    int x,sum,dis=999999;
}s[100005];
bool cmp(poi a,poi b)
{
    if(a.dis==b.dis)return a.sum>b.sum;
    return a.dis<b.dis;
}
int main()
{
    int n;
    cin>>n;
    int t=999999;
    for(int i=1;i<=n;i++){
        cin>>s[i].x;
        s[i].sum=0;
    }
}