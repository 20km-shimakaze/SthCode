/*
利用并查反集，先把情侣之间分到两边，然后从1~2n尝试一个个安放位置
ps：牛客没有造-1数据！！！
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;

const int N=2e5+7;
const int mod=998244353;
int n;
int fa[N];
int find(int x)
{
	return x==fa[x]?x:fa[x]=find(fa[x]);
}
void lian(int x,int y)
{
	int xx=find(x);
	int yy=find(y);
	if(xx!=yy)fa[xx]=yy;
}
int an[N],a[N],b[N];
void solve()
{
	cin>>n;
	for(int i=1;i<=n*4;i++)fa[i]=i;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		a[i]=x;
		b[i]=y;
		lian(x,y+n*2);
		lian(y,x+n*2);
	}
	an[1]=1;
	if(find(1)==find(1+2*n)){//矛盾
		cout<<-1<<endl;
		return;
	}
	for(int i=2;i<=n*2;i++){
		if(find(i)==find(i+2*n)){//矛盾
			cout<<-1<<endl;
			return;
		}
		if(find(i)!=find(i-1)){//
			lian(i,i-1+2*n);
			lian(i-1,i+2*n);
			an[i]=an[i-1]==1?2:1;
		}
		else an[i]=a[i-1];
	}
	for(int i=1;i<=n;i++)cout<<an[a[i]]<<" "<<an[b[i]]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}