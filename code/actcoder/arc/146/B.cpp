/*
题意：找k个数，允许加1，m次使得k个数&=值最大
方法：
贪心尽可能让高位是1，则对每一位都尝试变1（30次）
用一个an来储存从之前筛选的可以满足要求的值，
其中优先选取不消耗贡献的，若不够k个才消耗贡献，
当轮消耗少于m则这一位为1。
输出答案
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,k,m,minn,ans;
vector<int>an;
int check(int p)
{
	vector<P>v;
	vector<int>vv;
	int t=(1<<p);
	for(int x:an){
		int a=((1<<(p+1))-1)&x;
		if((1<<p)&x){
			v.push_back({0,x});
		}
		else v.push_back({(1<<p)-a,x});
	}
	sort(v.begin(),v.end());
	int num=0;
	for(auto[x,y]:v){
		if(!x){
			vv.push_back(y);
			num++;
			continue;
		}
		if(num>=k)break;
		minn+=x;
		vv.push_back(x+y);
		num++;
	}
	if(minn<=m){
		swap(vv,an);
		m-=minn;
		return 1;
	}
	else return 0;
}
void solve()
{
    cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		an.push_back(x);
	}
	ans=0;
	for(int i=30;i>=0;i--){
		minn=0;
		if(check(i))ans+=(1<<i);
	}
	cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}