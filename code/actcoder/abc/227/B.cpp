#include<iostream>
#include<cstdio>
using namespace std;
int vis[1007];
int n,x,s[100];
int main()
{
    cin>>n;
    for(int i=1;i<1000;i++){
        for(int j=1;j<1000;j++){
            x=4*i*j+3*i+3*j;
            if(x>1000)break;
            vis[x]=1;
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(!vis[x])ans++;
    }
    cout<<ans<<endl;
}