/*
ֱ�ӱ�����¼���ֵ��Сֵ�ĲȻ�������Сֵ��ֵ����2*x֤��Ҫ����һ��
��¼�������ٴμ���
*/
#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0);cout.tie(0);
using namespace std;
const int maxn=2e5+7;
int fi[maxn][40],fa[maxn][40];//f[i][j]��i��ʼ2^j���ȵ����ֵ
int p[maxn];//ԭ���� 
int n,m,x;
int read(){
    int num=0;char ch;
    while((ch=getchar())<'0'||'9'<ch);
    do num=num*10+ch-48,ch=getchar();while('0'<=ch&&ch<='9');
    return num;
}
void sta()
{
	for(int i=1;i<=n;i++)//����Ϊ0��ʼ�� 
		fa[i][0]=p[i];
	int t=log(n)/log(2)+1;//j��λ 
	for(int j=1;j<t;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			fa[i][j]=max(fa[i][j-1],fa[i+(1<<(j-1))][j-1]);//f[i][j-1]Ϊf[i][j]�ĳ�Ϊ2^j-1��ǰ��Σ���һ��Ϊf[i+(1<<(j-1))][j-1] 
		}
	}
}
void sti()
{
	for(int i=1;i<=n;i++)//����Ϊ0��ʼ�� 
		fi[i][0]=p[i];
	int t=log(n)/log(2)+1;//j��λ 
	for(int j=1;j<t;j++)
	{
		for(int i=1;i<=n-(1<<j)+1;i++)
		{
			fi[i][j]=min(fi[i][j-1],fi[i+(1<<(j-1))][j-1]);//f[i][j-1]Ϊf[i][j]�ĳ�Ϊ2^j-1��ǰ��Σ���һ��Ϊf[i+(1<<(j-1))][j-1] 
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