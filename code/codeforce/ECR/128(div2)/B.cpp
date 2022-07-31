#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,m;
char s[10][10];
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    int f1=-1;
    int ax,ay;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i][j]=='R'){
                if(f1==-1){
                    ax=j;
                    f1=1;
                }
                else{
                    if(ax>j){
                        cout<<"NO"<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<"YES"<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}