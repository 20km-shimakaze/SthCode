/*
贪心，如果能对某一位全部置位的话应当先给高位置1
然后依次向后推，最后重新计算这种方法的值即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int vis[40],vis1[40];
int n,k;
int a[200005];
void solve()
{
	memset(vis,0,sizeof(vis));
    memset(vis1,0,sizeof(vis1));
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        for(int i=1;x!=0;i++){
            if(x&1)vis[i]++;
            x>>=1;
        }
    }
    for(int i=31;i>=1;i--){
        if(vis[i]==n){
            vis1[i]=1;
            continue;
        }
        if(vis[i]+k>=n){
            vis1[i]=1;
            k-=(n-vis[i]);
        }
    }
    int ans=0;
    for(int i=31;i>=1;i--){
        ans<<=1;
        if(vis1[i])ans|=1;
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}