#include<iostream>
using namespace std;
#define ll long long
void slove()
{
    ll n,k;
    cin>>n>>k;
    ll sum=1,ans=0;
    while(1){
        if(k<=sum){
            break;
        }
        sum<<=1;
        ans++;
    }
    ll t=0;
    if((n-sum)>0){
        t=(n-sum)/k;
        if((n-sum)%k)t++;
    }
    if(t>0)ans+=t;
    cout<<ans<<endl;
} 
int main()
{
    int __;cin>>__;
    while(__--)slove();
}