#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int vis[3003];
int n,k;
int a[200005];
void solve()
{
    cin>>n>>k;
    int ans=0;
    for(int i=0;i<=k;i++)vis[i]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        ans+=a[i]/k;
        a[i]%=k;
        vis[a[i]]++;
    }
    int l=1,r=k;
    r--;
    //cout<<ans<<endl;
    while(l<r){
        if(l+r>=k){
            int tt=min(vis[l],vis[r]);
            //cout<<"----"<<tt<<endl;
            vis[l]-=tt;
            if(!vis[l])l++;
            vis[r]-=tt;
            if(!vis[r])r--;
            ans+=tt;
        }
        else l++;
    }
    //cout<<ans<<endl;
    for(int i=1;i<k;i++)if(2*i>=k)ans+=vis[i]/2;
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}