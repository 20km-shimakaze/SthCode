#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
string s1;
int s[200005];
int vis[200005];
void solve()
{
	int n,k;
    cin>>n>>k>>s1;
    for(int i=0;i<n;i++){
        if(s1[i]=='1')s[i]=1;
    }
    if(k&1){
        for(int i=0;i<n;i++)s[i]^=1;
    }
    
    for(int i=0;i<n-1&&k>0;i++){
        if(s[i]==0){
            vis[i]++;
            //cout<<"*";
            k--;
            s[i]=1;
        }
    }
    vis[n-1]+=k;
    if(k%2){
        if(s[n-1]==0)s[n-1]=1;
        else s[n-1]=0;
    }

    for(int i=0;i<n;i++){
        printf("%lld",s[i]);
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        printf("%lld ",vis[i]);
    }
    cout<<endl;
    for(int i=0;i<=n;i++)vis[i]=0,s[i]=0;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}