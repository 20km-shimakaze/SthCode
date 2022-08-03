/*
小明的花店新开张，为了吸引顾客，他想在花店的门口摆上一排花，共m盆。
通过调查顾客的喜好，小明列出了顾客最喜欢的n 
种花，从1 到n 标号。为了在门口展出更多种花，规定第i 种花不能超过ai 盆，
摆花时同一种花放在一起，且不同种类的花需按标号的从小到大的顺序依次摆列。
试编程计算，一共有多少种不同的摆花方案。
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int mod=1e6+7;
int n,m,a[100005];
int dp[10003];
vector<int>v;
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		int t=1;
		while(n>0){
			if(n>=t)v.push_back(t);
			else v.push_back(n);
			n-=t;
			t<<=1;
		}
	}
	dp[0]=1;
	for(int di:v)cout<<di<<" ";puts("");
	for(int i=0;i<v.size();i++){
		for(int j=10000;j>=v[i];j--){
			dp[j]+=dp[j-v[i]];
			dp[j]%=mod;
		}
	}
	cout<<dp[m]<<endl;
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}
/*
2 4
3 2

2 2
3 1(2)
*/