/*
把每一个的数位置记录下来（map vector），对每一个数进行滑窗操作，尝试找到最大的答案
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
void solve()
{
	int n;
	cin>>n;
	map<int,vector<int>>mp;
	vector<int>x(n+1);
	for(int i=1;i<=n;i++){
		cin>>x[i];
		mp[x[i]].push_back(i);
	}
	int a=x[1],l=1,r=1,ans=1;
	for(auto [dis,v]:mp){
		int k=v[0],last=v[0],res=1;
		for(int j=1;j<v.size();j++){
			int i=v[j];
			int cut=i-last-1;
			res=res-cut+1;
			last=i;
			if(res<1){
				res=1;
				k=i;
			}
			if(res>ans){
				ans=res;
				a=dis;
				l=k;
				r=i;
			}
		}
	}
	cout<<a<<" "<<l<<" "<<r<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}