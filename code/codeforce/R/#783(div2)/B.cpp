/*
̰�ģ�����û��Ҫ��ÿ������λ�õ�˳��Ϊ��������ÿ�λ�ã�
���Խ�������������Ҫ���������߿�λ�õ���Ŀ��Ȼ��һ����������λ�ã�
������Ƿ�����Ҫ�󼴿�
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