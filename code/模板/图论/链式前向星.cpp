#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
struct Edge
{
	int to,next,w;
}e[N];
int head[N],cnt;
void add(int from,int to,int w)
{
	e[++cnt].w=w;
	e[cnt].to=to;
	e[cnt].next=head[from];
	head[from]=cnt;
}
void solve()
{
	int a;
	for(int i=head[a];i;i=e[i].next){
		int t=e[i].to;
	}
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}