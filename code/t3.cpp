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
    f[i][j] 表示 前 j 个套娃 存在 i 组
    f[i][j] = f[i - 1][j - 1] + (f[i][j - 1] * (i - mis))(其中 mis 为不合法的位置)
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
            f[i][i] = f[i - 1][i - 1];  //至少存在 上一个状态的方案数
            for(int j = i + 1 ; j <= n ; j++)   // 此时 j 只能从 i + 1 个位置开始(即判断 前面的位置哪些能作为这一组的方案数)
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