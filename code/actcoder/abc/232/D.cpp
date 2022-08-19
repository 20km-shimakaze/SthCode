#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e2+7;
const int mod=998244353;
int ans,h,w;
char s[N][N];
struct poi
{
    int x,y,st;
};
int OK(int x,int y)
{
    return x>=1&&y>=1&&x<=h&&y<=w&&s[x][y]!='#';
}
int vis[N][N];
void solve()
{
	cin>>h>>w;
    for(int i=1;i<=h;i++)cin>>s[i]+1;
    queue<poi>q;
    q.push({1,1,1});
    while(q.size()){
        auto [x,y,st]=q.front();
        q.pop();
        if(vis[x][y])continue;
        vis[x][y]=1;
        int xx=x+1;
        int yy=y+1;
        int fl=0;
        if(OK(xx,y))q.push({xx,y,st+1}),fl=1;
        if(OK(x,yy))q.push({x,yy,st+1}),fl=1;
        if(!fl)ans=max(ans,st);
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