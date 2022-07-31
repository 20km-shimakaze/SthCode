#include<bits/stdc++.h>
using namespace std;
void slove()
{
    int n,a[200005];
    cin>>n;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int ans=a[0];
    for(int i=0;i<n-1;i++){
        if(ans<a[i+1]-a[i]){
            ans=a[i+1]-a[i];
        }
    }
    cout<<ans<<endl;
}
int main()
{
    int __;
    cin >> __;
    while (__--){
        slove();
    }
}