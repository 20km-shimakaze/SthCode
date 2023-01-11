/*
找到所有的a*b因子，直接暴力判断可以的组合
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
#define int long long
#define endl '\n'
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
map<int,int>mp;
vector<P>v;
int flag,ansx,ansy;
int a,b,c,d;
void f(int x)
{
	for(int i=2;i*i<=x;i++)
	{
		int cnt=0;
		while(x%i==0)cnt++,x/=i;
		mp[i]+=cnt;
	}
	if(x!=1)mp[x]+=1;
}
void dfs(int step,int x,int y)
{
	if(flag)return ;
	if(step==v.size())
	{
		int aa=((a/x)+1)*x;
		int bb=((b/y)+1)*y;
		if(aa<=c&&bb<=d)
		{
			flag=1;
			ansx=aa;
			ansy=bb;
		}
		return ;
	}
	int sum=1;
	int tmp=v[step].first;
	int cnt=v[step].second;
	for(int i=1;i<=cnt;i++)sum*=tmp;
	int now=1;
	for(int i=0;i<=cnt;i++)
	{
		dfs(step+1,x*now,y*(sum/now));
		now*=tmp;
	}
}
void solve()
{
	cin>>a>>b>>c>>d;
	mp.clear();
	v.clear();
	f(a);f(b);
	for(auto i:mp)v.push_back(i);
	flag=0;
	dfs(0,1,1);
	if(flag)cout<<ansx<<" "<<ansy<<endl;
	else cout<<"-1 -1"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}