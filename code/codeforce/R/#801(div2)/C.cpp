#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,m;
int s[1003][1003];
int ma[1003][1003],mi[1003][1003];
void solve()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1&&j==1){
                ma[i][j]=s[i][j];
                mi[i][j]=s[i][j];
                continue;
            }
            if(i==1){
                ma[i][j]=ma[i][j-1]+s[i][j];
                mi[i][j]=mi[i][j-1]+s[i][j];
            }
            else if(j==1){
                ma[i][j]=ma[i-1][j]+s[i][j];
                mi[i][j]=mi[i-1][j]+s[i][j];
            }
            else{
                ma[i][j]=max(ma[i][j-1],ma[i-1][j])+s[i][j];
                mi[i][j]=min(mi[i-1][j],mi[i][j-1])+s[i][j];
            }
        }
    }
    if((n+m)%2==0){
        puts("NO");
        return;
    }
    int ta=ma[n][m];
    int tb=mi[n][m];
    if(ta>=0&&tb<=0)puts("YES");
    else puts("NO");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}


