/*
直接遍历记录最大值最小值的差，然后当最大最小值差值超过2*x证明要调整一次
记录调整多少次即可
*/
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cout.tie(0);
using namespace std;
const int maxn=2e5+7;
int fi[maxn][40],fa[maxn][40];//f[i][j]从i开始2^j长度的最大值
int p[maxn];//原数组 
int n,m,x;
int read(){
    int num=0;char ch;
    while((ch=getchar())<'0'||'9'<ch);
    do num=num*10+ch-48,ch=getchar();while('0'<=ch&&ch<='9');
    return num;
}
void sta()
{
	for(int i=1;i<=n;i++)//距离为0初始化 
		fa[i][0]=p[i];
	int t=log(n)/log(2)+1;//j定位 
	for(int j=1;j<t;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			fa[i][j]=max(fa[i][j-1],fa[i+(1<<(j-1))][j-1]);//f[i][j-1]为f[i][j]的长为2^j-1的前半段，另一段为f[i+(1<<(j-1))][j-1] 
		}
	}
}
void sti()
{
	for(int i=1;i<=n;i++)//距离为0初始化 
		fi[i][0]=p[i];
	int t=log(n)/log(2)+1;//j定位 
	for(int j=1;j<t;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			fi[i][j]=min(fi[i][j-1],fi[i+(1<<(j-1))][j-1]);//f[i][j-1]为f[i][j]的长为2^j-1的前半段，另一段为f[i+(1<<(j-1))][j-1] 
		}
	}
}
int querya(int l,int r)
{
	int k=log2(r-l+1);
	return max(fa[l][k],fa[r-(1<<k)+1][k]);
}
int queryi(int l,int r)
{
	int k=log2(r-l+1);
	return min(fi[l][k],fi[r-(1<<k)+1][k]);
}
void solve()
{
    int ans=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)cin>>p[i];
    int ma=p[1],mi=p[1];
    for(int i=1;i<=n;i++){
        ma=max(ma,p[i]);
        mi=min(mi,p[i]);
        if(ma-mi>2*x){
            ma=mi=p[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main()
{
	IOS
	int __;
    cin>>__;
    while(__--)solve();
}