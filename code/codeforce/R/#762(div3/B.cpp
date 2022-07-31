#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>vec;
void fun()
{
    for(int i=1;i<=100005;i++){
        int a1=i*i;
        int a2=i*i*i;
        if(a1<=1e9)vec.push_back(a1);
        if(a2<=1e9)vec.push_back(a2);
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
}
void slove()
{
    int n;
    cin>>n;
    int dis=upper_bound(vec.begin(),vec.end(),n)-vec.begin();
    
    cout<<dis<<endl;
}
signed main()
{
    
    int __;
    fun();
    cin>>__;
    while(__--)slove();
}