#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,m;
int s[50][50];
void solve()
{
    cin>>n>>m;
    int maxx=INT_MIN,ax=0,ay=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
            if(s[i][j]>maxx){
                maxx=s[i][j];
                ax=i;
                ay=j;
            }
        }
    }
    cout<<max(ax,n-ax+1)*max(ay,m-ay+1)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}