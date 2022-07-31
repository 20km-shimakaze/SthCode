#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
char s[2][200005];
int n;
struct poi
{
    int x,y;
};
queue<poi>q;
int vis[2][200005];
void solve()
{
	cin>>n;
    cin>>s[0]>>s[1];
    int bx,by;
    for(int i=0;i<n;i++){
        if(s[0][i]=='*'){
            bx=0;
            by=i;
            break;
        }
        if(s[1][i]=='*'){
            bx=1;
            by=i;
            break;
        }
    }
    int ex,ey=n-1;
    for(int i=n-1;i>=0;i--){
        if(s[0][i]=='*'){
            ex=0;
            ey=i;
            break;
        }
        if(s[1][i]=='*'){
            ex=1;
            ey=i;
            break;
        }
    }
    int ans=ey-by;
    int dis=bx^1;
    for(int i=by;i<=ey;i++){
        if(s[dis][i]=='*')ans++;
    }
    //cout<<ey<<" "<<by<<endl;
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