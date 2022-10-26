/*
先是求出所有可能的答案，然后再去筛选
可能的答案就是任意取一个数a1，从中与另一个数组的元素xor的所有数
但是这个只是满足了对于a1是满足题目的数，然后就要确认其他的数是否
也是满足要求的，只需要用这个备选数和其他的xor看这个数是否是存在的即可
利用了xor的可逆性质
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
int a[N],b[N];
int n;
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)cin>>b[i];
	vector<int>v,ans;
	set<int>se;
	for(int i=1;i<=n;i++)v.push_back(a[1]^b[i]);
	for(int di:v){
		map<int,int>mp;
		for(int i=1;i<=n;i++)mp[a[i]]++;
		int fl=0;
		for(int i=1;i<=n;i++){
			if(mp[b[i]^di])mp[b[i]^di]--;
			else{
				fl=1;
				break;
			}
		}
		if(!fl)se.insert(di);
	}
	cout<<se.size()<<endl;
	for(int x:se)cout<<x<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}