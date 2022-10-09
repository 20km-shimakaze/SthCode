#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
struct Edge
{
    int to,next;
    double w;
}e[N];
int head[N],cnt;
void add(int from,int to,double w)
{
    e[++cnt].w=w;
    e[cnt].to=to;
    e[cnt].next=head[from];
    head[from]=cnt;
}
int n;
double ans[N];
void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++)head[i]=0,ans[i]=0;
    cnt=0;
    for(int i=1;i<n;i++){
        int k;
        cin>>k;
        for(int j=1;j<=k;j++){
            int x;double y;
            cin>>x>>y;
            add(i,x,y);
        }
    }
    ans[1]=1;
    for(int x=1;x<=n;x++){
        double t=1;
        for(int j=head[x];j;j=e[j].next){
            int y=e[j].to;
            double w=e[j].w;
            ans[y]+=ans[x]*w;
            t-=w;
        }
        ans[x]*=t;
        printf("%6lf ",ans[x]);
    }
    cout<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}