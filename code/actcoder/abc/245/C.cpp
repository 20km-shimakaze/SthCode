#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
int a[maxn],b[maxn],dp[maxn],ep[maxn];
int n,k;
signed main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++)cin>>b[i];
	dp[1]=1;
	ep[1]=1;//��һ��Ĭ�Ͽ���ѡ
	for(int i=2;i<=n;i++){//�ӵڶ�����ʼ�ж��Ƿ��п�������a[i]/b[i]�ķ���
		if(dp[i-1]&&abs(a[i]-a[i-1])<=k)dp[i]=1;//a[i-1]��ѡ��������a[i-1]->a[i]����,��ô���߿������쵽a[i]
		if(dp[i-1]&&abs(b[i]-a[i-1])<=k)ep[i]=1;//ͬ��
		if(ep[i-1]&&abs(a[i]-b[i-1])<=k)dp[i]=1;
		if(ep[i-1]&&abs(b[i]-b[i-1])<=k)ep[i]=1;
	}
	if(ep[n]||dp[n])cout<<"Yes"<<endl;//ֻҪ��һ������ѡ����
	else cout<<"No"<<endl;
}