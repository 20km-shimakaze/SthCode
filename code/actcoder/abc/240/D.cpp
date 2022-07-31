#include<bits/stdc++.h>
using namespace std;
int n,x,s[200005][2];
stack<int>st;
void solve()
{
    cin>>n;
    int len=0,sum=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(len==0){
            s[++len][0]=x;
            s[len][1]=1;
        }
        else if(s[len][0]==x){
            s[len][1]++;
        }
        else {
            s[++len][0]=x;
            s[len][1]=1;
        }
        sum++;
        if(s[len][1]==x){
            len--;
            sum-=x;
        }
        cout<<sum<<endl;
    }
}
signed main()
{
    int __;
    //cin>>__;
    __=1;
    while(__--)solve();
}