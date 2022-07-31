#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
set<int>se;
int k,n;
int p[200005],an[200005],fa[200005],su[200005];
int find(int x)
{
	if(fa[x]<=0)return x;
	return fa[x]=find(fa[x]);
}
void solve()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>p[i],an[i]=-1,su[i]=0;
	for(int i=1;i<=n;i++){
		int t=p[i];
		auto it=se.lower_bound(t);
		if(it==se.end()){
			su[t]++;
		}
		else{
			su[t]=su[*it]+1;
			fa[*it]=t;
			se.erase(it);
		}
		se.insert(t);
		if(su[t]==k){
			se.erase(t);
			fa[t]=-i;
		}
	}
	for(int i=1;i<=n;i++){
		int ro=find(i);
		if(fa[ro]==0)puts("-1");
		else cout<<(-fa[ro])<<endl;
	}
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}