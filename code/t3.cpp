#include<bits/stdc++.h>
#define ll long long
#define ri register int
#define int long long
using namespace std;
const int maxN = 5500;
const ll INF = 0x3f3f3f3f;
const ll mod = 998244353;
inline ll read()
{
    ll ans=0,f=0;
    char ch=getchar();
    while(ch<'0'||ch>'9')f^=(ch=='-'),ch=getchar();
    while(ch>='0'&&ch<='9')ans=(ans<<3)+(ans<<1)+(ch^48),ch=getchar();
    return f?-ans:ans;
}
int t;
int a[maxN];
int f[maxN][maxN];
/*
    f[i][j] ��ʾ ǰ j ������ ���� i ��
    f[i][j] = f[i - 1][j - 1] + (f[i][j - 1] * (i - mis))(���� mis Ϊ���Ϸ���λ��)
*/
signed main()
{
    t = read();
    while(t--)
    {
        int n = read(),k = read(),r = read();
        for(int i = 1 ; i <= n ; i++)
            a[i] = read();
        for(int i = 1 ; i <= n ; i++)
            for(int j = 1 ; j <= n ; j++)
                f[i][j] = 0;
        f[0][0] = 1;
        for(int i = 1 ; i <= k ; i++)
        {
            int now_temp = 0;
            int now_size = 1;
            f[i][i] = f[i - 1][i - 1];  //���ٴ��� ��һ��״̬�ķ�����
            for(int j = i + 1 ; j <= n ; j++)   // ��ʱ j ֻ�ܴ� i + 1 ��λ�ÿ�ʼ(���ж� ǰ���λ����Щ����Ϊ��һ��ķ�����)
            {
                while(1)
                {
                    if(now_size >= j || a[now_size] + r > a[j]) break;
                    now_temp++;
                    now_size++;
                }
                int mis = j - now_temp - 1;
                f[i][j] = (f[i - 1][j - 1] + (f[i][j - 1] * max(i - mis,0 * 1ll)) % mod ) % mod;
            }
        }
        printf("%lld\n",f[k][n]);
    }
    system("pause");
    return 0;
}