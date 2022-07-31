#include<bits/stdc++.h>
using namespace std;
struct poi
{
    int x,y;
}s[10];
bool cmp(poi a,poi b)
{
    return a.y<b.y;
}
void solve()
{
    cin>>s[0].x>>s[0].y>>s[1].x>>s[1].y>>s[2].x>>s[2].y;
    sort(s,s+3,cmp);
    double ans=0;
    if(s[1].y==s[2].y){
        ans=abs(s[1].x-s[2].x);
    }
    printf("%.9lf\n",ans);
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}