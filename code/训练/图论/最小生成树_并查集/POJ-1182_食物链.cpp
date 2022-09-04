#include <iostream>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,m;
int fa[N];
int find(int x)
{
    return x==fa[x]?x:fa[x]=find(fa[x]);
}
void lian(int x,int y)
{
    int xx=find(x);
    int yy=find(y);
    if(xx!=yy)fa[xx]=yy;
}
void solve()
{
    int ans=0;
	cin>>n>>m;
    for(int i=1;i<=n*3;i++)fa[i]=i;
    for(int i=1;i<=m;i++){
        int x,y,op;
        cin>>op>>x>>y;
        if(x<1||x>n||y<1||y>n){
            ans++;
            continue;
        }
        if(op==2&&x==y){
            ans++;
            continue;
        }
        if(op==1){
            if(find(x)==find(y+n)||find(y)==find(x+n))ans++;
            else{
                lian(x,y);
                lian(x+n,y+n);
                lian(x+2*n,y+2*n);
            }
        }
        else{
            if(find(x)==find(y)||find(y+n)==find(x))ans++;
            else{
                lian(x+n,y);
                lian(y+2*n,x);
                lian(y+n,x+2*n);
            }
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}