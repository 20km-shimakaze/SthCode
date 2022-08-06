#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N = 600 + 10;
char a[N][N];
int f[2][N][N],g[N][N],n,m;

int DP1(int x,int y,int typ) {
    if (x > n || y > m) return -1;

    if (a[x][y] != '.') {
        if (a[x][y] == 'A') return 1;
        else return 0;
    }
    if (x == n && y == m) return 0;
    int &res=f[typ][x][y];
    if (res != -1) return res;

    int nxt1 = DP1(x+1,y,1 - typ),nxt2 = DP1(x,y+1,1-typ);
    if (nxt1 == -1 || nxt2 == -1) {
        if (nxt1 == -1) return res = nxt2;
        else return res = nxt1;
        return res;
    }
    if (!typ) return res = nxt1 | nxt2;
    else return res = nxt1 & nxt2;
    return -1;
}

int DP2(int x,int y,int typ) {
    if (x > n || y > m) return -1;

    if (a[x][y] != '.') {
        if (a[x][y] == 'A') return 0;
        else return 0;
    }
    if (x == n && y == m) return 1;
    int &res=f[typ][x][y];
    if (res != -1) return res;

    int nxt1 = DP2(x+1,y,1 - typ),nxt2 = DP2(x,y+1,1-typ);
    if (nxt1 == -1 || nxt2 == -1) {
        if (nxt1 == -1) return res = nxt2;
        else return res = nxt1;
        return res;
    }
    if (!typ) return res = nxt1 | nxt2;
    else return res = nxt1 & nxt2;
    return -1;
}

int DP3(int x,int y,int typ) {
    if (x > n || y > m) return -1;

    if (a[x][y] != '.') {
        if (a[x][y] == 'A') return 0;
        else return 1;
    }

    if (x == n && y == m) return 0;
    int &res=f[typ][x][y];
    if (res != -1) return res;

    int nxt1 = DP3(x+1,y,1 - typ),nxt2 = DP3(x,y+1,1-typ);
    if (nxt1 == -1 || nxt2 == -1) {
        if (nxt1 == -1) return res = nxt2;
        else return res = nxt1;
        return res;
    }
    if (!typ) return res = nxt1 | nxt2;
    else return res = nxt1 & nxt2;
    return -1;
}

void solve() {
    cin>>n>>m;
    for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
    memset(f,-1,sizeof(f));
    if (DP1(1,1,0))cout<<"yes ";
    else cout<<"no ";
    memset(f,-1,sizeof(f));
    if (DP2(1,1,0))cout<<"yes ";
    else cout<<"no ";
    memset(f,-1,sizeof(f));
    if (DP3(1,1,0))cout<<"yes "<<endl;
    else cout<<"no "<<endl;
}

signed main()
{
    int T;cin>>T;
    while (T--) solve();
	return 0;
}