/*
贪心，由于没有要求每个人坐位置的顺序，为了最大化利用空位置，
可以进行排序所有人要求左右两边空位置的数目，然后一个个暴力放位置，
最后检查是否满足要求即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,m;
int a[100005];
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int dis=1;
	for(int i=2;i<=n;i++){
		dis+=a[i]+1;
	}
	//cout<<dis<<" "<<dis+a[1]<<endl;
	if(dis+a[n]<=m){
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}