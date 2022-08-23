#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=103;
const int mod=998244353;
int n,m;
int s[N][N];
void solve()
{
	cin>>n>>m;
    int ans=0;
    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        s[x][y]=1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                s[j][k]|=s[j][i]&&s[i][k];
            }
        }
    }
    for(int i=1;i<=n;i++){
        int tot=0;
        for(int j=1;j<=n;j++){
            if(s[i][j])tot++;
            if(s[j][i])tot++;
        }
        if(tot>=n-1)ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}