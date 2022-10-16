#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<char,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int n,p[N];
void solve()
{
	cin>>n;
	vector<P>v;
	for(int i=1;i<=n;i++)cin>>p[i];
	vector<int>a,b;
	for(int i=1;i<=n;i++){
		if((p[i]&1)!=(i&1)){
			if(i&1)b.push_back(i);
			else a.push_back(i);
		}
	}
	for(int i=0;i<a.size();i++){
		int ta=a[i];
		int tb=b[i];
		while(ta>2)ta-=2,v.push_back({'B',ta}),swap(p[ta],p[ta+2]);
		while(tb>2)tb-=2,v.push_back({'B',tb}),swap(p[tb],p[tb+2]);
		v.push_back({'A',1});
		swap(p[1],p[2]);
	}
	for(int i=1;i<=n;i++){
		int di=0;
		for(int j=1;j<=n;j++){
			if(p[j]==i){
				di=j;
				break;
			}
		}
		if(di>i)while(di!=i)di-=2,v.push_back({'B',di}),swap(p[di],p[di+2]);
		else while(di!=i)v.push_back({'B',di}),di+=2,swap(p[di],p[di+2]);
	}
	cout<<v.size()<<endl;
	for(auto [a,b]:v){
		cout<<a<<" "<<b<<endl;
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