/*
Ҫ������������������һ���Ǳ�ѡ��
������ƽ��ֵ����λ����ʲô
ƽ��ֵ�����ö��ִ𰸣�ת��Ϊÿ��ӵ�����ȥmid�������>=0���ǿ��Ե�ƽ��ֵ�������mid
��λ�������ö��ִ𰸣�ת��Ϊ����p���ڵ���+1��С�ڵ�-1�����>0�������Եģ������mid
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=100005;
double dp[N][2];
double a[N];
int n;
bool check1(double p)
{
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		dp[i][0]=dp[i-1][1];
		dp[i][1]=max(dp[i-1][0],dp[i-1][1])+a[i]-p;
	}
	return max(dp[n][0],dp[n][1])>=0;
}
bool check2(int p)
{
	memset(dp,0,sizeof(dp));
	for(int i=1;i<=n;i++){
		dp[i][0]=dp[i-1][1];
		if(a[i]>=p)dp[i][1]=max(dp[i-1][0],dp[i-1][1])+1;
		else dp[i][1]=max(dp[i-1][0],dp[i-1][1])-1;
	}
	return max(dp[n][0],dp[n][1])>0;
}
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
	double l=0,r=1e9+7,an1;
	int an2;
	while(r-l>1e-6){
		double mid=(l+r)/2;
		if(!check1(mid))r=mid;
		else l=mid,an1=mid;
	}
	printf("%.10lf\n",an1);
	int ll=1,rr=1e9+7;
	while(rr-ll>1){
		int mid=(ll+rr)/2;
		if(check2(mid))ll=mid;
		else rr=mid,an2=mid;
		//cout<<ll<<" "<<rr<<endl;
	}
	cout<<an2-1<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}