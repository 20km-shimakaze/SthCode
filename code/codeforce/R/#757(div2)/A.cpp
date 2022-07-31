#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105];
void slove()
{
    int n,l,r,k;
    cin>>n>>l>>r>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int ans=0,sum=0;
    for(int i=1;i<=n;i++){
        if(sum+a[i]>k||a[i]<l||a[i]>r)continue;
        sum+=a[i];
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}