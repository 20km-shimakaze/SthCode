#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
int a[200005];
bitset<55>vis;
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    int di=n;
    sort(a+1,a+1+n);
    vis.reset();
    for(int j=n;j>=1;j--){
        int flag=0;
        //if(vis[j])continue;
        //cout<<"&&"<<j<<endl;
        while(1){
            if(a[j]<=n&&a[j]>=1&&vis[a[j]]==0){
                vis[a[j]]=1;
                flag=1;
                //cout<<a[j]<<endl;
                break;
            }
            if(a[j]==1){
                flag=0;
                break;
            }
            a[j]/=2;
        }
        // cout<<"&&"<<j<<endl;
        // cout<<"fl"<<flag<<endl;
        if(!flag){
            puts("NO");
            return;
        }
    }
    puts("YES");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}