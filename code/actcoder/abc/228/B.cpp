#include<iostream>
using namespace std;
int n,x,s[100005],vis[100005];
int main()
{
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    int ans=0;
    while(1){
        if(vis[x])break;
        vis[x]=1;
        ans++;
        x=s[x];
    }
    cout<<ans<<endl;
}