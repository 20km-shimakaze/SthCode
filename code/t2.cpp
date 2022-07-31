#pragma GCC optimize(3,"Ofast","inline")  	//G++
#include<bits/stdc++.h>
#define mem(a,x) memset(a,x,sizeof(a))
#define debug(x) cout << #x << ": " << x << endl;
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fcout cout<<setprecision(4)<<fixed
using namespace std;
namespace FastIO {char buf[1 << 21], buf2[1 << 21], a[20], *p1 = buf, *p2 = buf, hh1 = '\n', hh2 = ' ';int p, p3 = -1;
void read() {}
void print() {buf2[p3] = hh1;}
inline int getc() {return p1 == p2 && (p2 = (p1 = buf) + fread(buf, 1, 1 << 21, stdin), p1 == p2) ? EOF : *p1++;}
inline void flush() {fwrite(buf2, 1, p3 + 1, stdout), p3 = -1;}
template <typename T, typename... T2>
inline void read(T &x, T2 &... oth) {int f = 0;x = 0;char ch = getc();while (!isdigit(ch)) {if (ch == '-')f = 1;ch = getc();}while (isdigit(ch)) {x = x * 10 + ch - 48;ch = getc();}x = f ? -x : x;read(oth...);}
template <typename T, typename... T2>
inline void print(T x, T2... oth) {if (p3 > 1 << 20)flush();if (x < 0)buf2[++p3] = 45, x = -x;do {a[++p] = x % 10 + 48;} while (x /= 10);do {buf2[++p3] = a[p];} while (--p);buf2[++p3] = hh2;print(oth...);}} // namespace FastIO
using FastIO::print;
using FastIO::read;
typedef long long ll;
typedef pair<int,int> pii;
const int inf=0x3f3f3f3f;
const int mod=1e9+7;
const int maxn = 1e6+5;
int mp[maxn];
int a[maxn];
int main()
{
    int T;
    read(T);
    while(T--)
	{
        int n;
        read(n);
        for(int i=0,x;i<n;i++)
		{
            read(x);
            mp[x%3600]++;
        }
        int cnt=0;
        for(int i=0;i<3600;i++)
		{
            if(!mp[i]) continue;
            int k=1;
            while(k<=mp[i])
			{
                a[++cnt]=i*k;
                mp[i]-=k,k*=2;
            }
            if(mp[i])
			{
                a[++cnt]=mp[i]*i;
                mp[i]=0;
            }
        }   
        n=cnt;
        bitset<3600>res,cur;
        for(int i=1;i<=n;i++)
		{
            int x=a[i]%3600;
            cur.reset(),cur[x]=1;
            cur|=(res<<x)|(res>>(3600-x));
            res|=cur;
            if(res[0]) break;
        }
        puts(res[0]?"YES":"NO");
    }
    FastIO::flush();
    return 0;
}
