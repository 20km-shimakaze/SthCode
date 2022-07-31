/*
查看是否存在2x2的方格里面只有一个是0的情况，存在证明不行
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
char s[103][103];
int n,m;
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if((s[i][j]=='0'&&s[i+1][j]=='1'&&s[i+1][j+1]=='1'&&s[i][j+1]=='1')||
            (s[i][j]=='1'&&s[i+1][j]=='0'&&s[i+1][j+1]=='1'&&s[i][j+1]=='1')||
            (s[i][j]=='1'&&s[i+1][j]=='1'&&s[i+1][j+1]=='0'&&s[i][j+1]=='1')||
            (s[i][j]=='1'&&s[i+1][j]=='1'&&s[i+1][j+1]=='1'&&s[i][j+1]=='0')
            ){
                puts("NO");
                return;
            }
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