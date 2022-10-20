#define LL long long
#define pb push_back
#define pii pair<LL,LL>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
#include <string>
#include <cstdio>
#include <set>
#include <vector>
#include <sstream>
#include <queue>
using namespace std;
const int N = 1e6+10;
const int mod = 998244353;
const LL INF = -(LL)pow(2,62)-1;
LL gcd(LL a, LL b) {return b == 0 ? a : gcd(b, a % b);}
LL xx[N],yy[N],zz[N];
LL head[N],nxt[N],to[N],from[N],len[N],dis[N];
LL cnt = 2,n,m,s,x,y,z;
bool vis[N];
void addedge(LL x,LL y,LL z){
	nxt[++cnt] = head[x];head[x] = cnt;from[cnt] = x;to[cnt] = y;len[cnt] = z;
}
inline int read() {
  int x=0, f=1; register char ch=getchar();
  for (; ch<'0' || ch>'9'; ch=getchar()) if (ch=='-') f=-1;
  for (; ch>='0' && ch<='9'; ch=getchar()) x=x*10+ch-'0';
  return x*f;
}

void init(){
	cnt = 2;
	memset(head,0,sizeof(head));
	memset(nxt,0,sizeof(nxt));
	memset(vis,0,sizeof(vis));
	for(int i=0;i<N;++i) dis[i] = INF;
}
void dij(){
	priority_queue<pii> q;
	q.push(make_pair(-INF, 1));
	while(!q.empty()){
		pii cur = q.top();
		q.pop();
		if(vis[cur.second]) continue;
		vis[cur.second] = 1;
		//dis[i]维护的是目前到达i点最大的代价.
		//first维护的是这条路径上面目前的最小值.
		for(int i=head[cur.second];i;i=nxt[i]){
			int tmp = to[i];
			if(len[i] > dis[tmp] && cur.first > dis[tmp]){
				q.push(make_pair(len[i]<cur.first?len[i]:cur.first,tmp));
				dis[tmp] = len[i]<cur.first?len[i]:cur.first;
			}
		}
	}
}
int ans1[N];
int main() {
    int t = read();
    int tot=1;
	while(t--){
		printf("Scenario #%d:\n",tot++);
		init();
		n = read();
		m = read();
		for(int i=1;i<=m;++i){
			xx[i] = read();
			yy[i] = read();
			zz[i] = read();
			addedge(xx[i],yy[i],zz[i]);
			addedge(yy[i],xx[i],zz[i]);
		}
		dij();
		cout << dis[n] << endl << endl;
	}

    return 0;
}
