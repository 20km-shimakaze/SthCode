/*
̰�ģ�Ӧ������һ�����ǲ�Ҫ�����κα仯�ģ���ΪҪ�������仯�ˣ����������Ҫͬ�����ӣ�û�б�Ҫ
����ֻҪ��һ������Ϊ���޸ģ��������޸ļ���ʱ�临�Ӷ�o(n^2)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[10000];
void solve()
{
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=1e18;
	for(int i=1;i<=n;i++){
		int num=0,no=0;
		for(int j=i-1;j>=1;j--){
			int t=no/a[j]+1;
			num+=t;
			no=t*a[j];
		}
		int nw=0;
		for(int j=i+1;j<=n;j++){
			int t=nw/a[j]+1;
			num+=t;
			nw=t*a[j];
		}
		ans=min(ans,num);
	}
	cout<<ans<<endl;	
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}