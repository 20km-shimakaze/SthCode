/*
С���Ļ����¿��ţ�Ϊ�������˿ͣ������ڻ�����ſڰ���һ�Ż�����m�衣
ͨ������˿͵�ϲ�ã�С���г��˹˿���ϲ����n 
�ֻ�����1 ��n ��š�Ϊ�����ſ�չ�������ֻ����涨��i �ֻ����ܳ���ai �裬
�ڻ�ʱͬһ�ֻ�����һ���Ҳ�ͬ����Ļ��谴��ŵĴ�С�����˳�����ΰ��С�
�Ա�̼��㣬һ���ж����ֲ�ͬ�İڻ�������
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