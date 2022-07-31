#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[105],n,k;
int vis[200005];
void slove()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    memset(vis,0,sizeof(vis));
    int sum=0;
    int s1=0,s2=0;
    int s3=0;
    for(int i=n;i>=1;){
        if(k>0){
            sum+=a[i-1]/a[i];
            if(a[i]==a[i-1]){
                s1++;
                if(vis[a[i]]!=0){
                    s3++;
                    vis[a[i]]--;
                }
            }
            else {
                s2++;
                vis[a[i]]++;
                vis[a[i-1]]++;
            }
            i-=2;
            k--;
        }
        else{
            sum+=a[i];
            i--;
        }
    }
    if(s1>=s2)sum-=s2;
    else sum-=s1;
    sum+=s3;
    cout<<sum<<endl;
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}