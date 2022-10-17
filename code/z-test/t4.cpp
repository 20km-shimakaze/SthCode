#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<bitset>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<assert.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=303;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int link[N],n,lx[N],ly[N];
int w[N][N];
bitset<N>vx,vy;
namespace KM {
    long long cal(int n, int m) {
        std::vector<long long> u(n + 1), v(m + 1), p(m + 1), way(m + 1);
        for (int i = 1; i <= n; i++) {
            p[0] = i;
            long long j0 = 0;
            std::vector<long long> minv(m + 1, 1e18);
            std::vector<char> used(m + 1, false);
            do {
                used[j0] = true;
                long long i0 = p[j0], delta = 1e18, j1;
                for (int j = 1; j <= m; ++j) {
                    if (!used[j]) {
                        long long cur = w[i0][j] - u[i0] - v[j];
                        if (cur < minv[j]) {
                            minv[j] = cur, way[j] = j0;
                        }
                        if (minv[j] < delta) {
                            delta = minv[j], j1 = j;
                        }
                    }
                }
                for (int j = 0; j <= m; ++j) {
                    if (used[j]) {
                        u[p[j]] += delta, v[j] -= delta;
                    }
                    else {
                        minv[j] -= delta;
                    }
                }
                j0 = j1;
            } while (p[j0] != 0);
            do {
                long long j1 = way[j0];
                p[j0] = p[j1];
                j0 = j1;
            } while (j0);
        }
        long long res = 0;
        for (int i = 1; i <= m; i++) {
            res += w[p[i]][i];
        }
        return res;
    }
}

void solve()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        int x,y,z,v;
        cin>>x>>y>>z>>v;
        for(int j=0;j<n;j++){
            w[i][j+1]=(x*x+y*y+(z+j*v)*(z+j*v));
        }
    }
    cout<<KM::cal(n,n)<<endl;
}
signed main()
{
    //IOS
    int __=1;
    //cin >> __;
    while (__--)
        solve();
}