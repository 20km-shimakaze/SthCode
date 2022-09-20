#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
vector<int>v[N];
int n,m,k,s,t,x;
int f[2003][2003][2];//长度为i的路径起点是s终点是j，节点x在其中出现次数
void solve()
{
	cin>>n>>m>>k>>s>>t>>x;
	for(int i=1;i<=m;i++){
		int aa,bb;
		cin>>aa>>bb;
		v[aa].push_back(bb);
		v[bb].push_back(aa);
	}
	f[0][s][s==x]=1;//起点到起点这个点的方法数
	for(int i=0;i<k;i++){//整个路径长度可能为1-k
		for(int u=1;u<=n;u++){//尝试每一个终点的答案
			for(int num=0;num<=1;num++){//x可能出现了偶数/奇数次
				if(!f[i][u][num])continue;//若此节点现在没有贡献值，说明现在这个长度还没有能到这个点的路径
				for(int ne:v[u]){
					int ta=(num^(ne==x));//看经过下一个节点的奇偶数
					f[i+1][ne][ta]=(f[i+1][ne][ta]+f[i][u][num])%mod;
				}
			}
		}
	}
	cout<<f[k][t][0]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}