#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,m,fa[N];
int w[N];
int find(int x)
{
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void lian(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy)fa[xx]=fa[yy];
}
struct poi
{
    int a,b,c;
}p[N];
void solve()
{
	cin>>n>>m;
    int ans=0;
    for(int i=1;i<=2*n;i++){
        fa[i]=i;
    }
    for(int i=1;i<=m;i++){
        cin>>p[i].a>>p[i].b>>p[i].c;
    }
    sort(p+1,p+1+m,[&](poi a,poi b){
        return a.c>b.c;
    });
    for(int i=1;i<=m;i++){
        auto [a,b,c]=p[i];
        if(find(a)==find(b)){
            ans=max(ans,c);
            //cout<<c<<endl;
        }
        else{
            lian(a,b+n);
            lian(b,a+n);
        }
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