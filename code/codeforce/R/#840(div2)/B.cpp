#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
// #define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
struct poi
{
    int h,p;
}p[N];
int f[N][30];//f[i][j]从i开始2^j长度的最大值 
int mn[N];//储存答案 
int pp[N];//原数组 
int n,m;

void st()
{
	for(int i=1;i<=n;i++)//距离为0初始化 
		f[i][0]=pp[i];
	int t=log(n)/log(2)+1;//j定位 
	for(int j=1;j<t;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			f[i][j]=min(f[i][j-1],f[i+(1<<(j-1))][j-1]);//f[i][j-1]为f[i][j]的长为2^j-1的前半段，另一段为f[i+(1<<(j-1))][j-1] 
		}
	}
	
	for(int len=1;len<=n;len++)//数组储存答案 
	{
		int k=0;
		while((1<<(k+1))<=len)
			k++;
		mn[len]=k;
	}
}

int query(int l,int r)
{
	int k=log2(r-l+1);
	return min(f[l][k],f[r-(1<<k)+1][k]);
}
int k;
void solve()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)cin>>p[i].h;
    for(int i=1;i<=n;i++)cin>>p[i].p;
    sort(p+1,p+1+n,[&](poi a,poi b){
        return a.h<b.h;
    });
    for(int i=1;i<=n;i++)pp[i]=p[i].p;
    st();
    int di=1;
    int su=0;
    while(1){
        su+=k;
        while(di<=n&&p[di].h<=su)di++;
        // cout<<di<<" "<<su<<endl;
        if(di>n){
            cout<<"YES"<<endl;
            return;
        }
        int dis=query(di,n);
        k-=dis;
        if(k<=0){
            cout<<"NO"<<endl;
            return;
        }
    }
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}