/*
���ֿɵã�����û���ֵĵ�һ���ǲ������ӵ��������Ķ���ÿ��������Ŀ+2
Ȼ���������⼴��
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int i=0;
int ans[1000006];
int n;
void solve()
{
	cin>>n;
	cout<<lower_bound(ans,ans+i,n)-ans<<endl;
}
signed main()
{
	int t=0;
	while(ans[i]<=1e9){
		i++;
		if(i%3!=1)t+=2;
		ans[i]=ans[i-1]+t;
	}
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}