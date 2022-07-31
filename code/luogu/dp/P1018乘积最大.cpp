#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n,k,len;
int a[100];
string s;
int maxx=-1;
void dfs(int l,int m,int ans)//第i位 剩m没用 目前为ans
{
    if(len-l==m){
        ll t=0;
        for(int i=l;i<=n;i++){
            t*=10;
            t+=a[i];
        }
        ans*=t;
        maxx=max(maxx,ans);
    }
    int t=0;
    for(int i=l;i<=len-m;i++){
        t*=10;
        t+=a[i];
        dfs(i,m-1,ans*t);
    }
}
int main()
{
    cin>>n>>k>>s;
    len=s.size();
    for(int i=1;i<=s.size();i++){
        a[i]=s[i-1]-'0';
    }
    dfs(1,n,a[1]);
    cout<<maxx<<endl;
}