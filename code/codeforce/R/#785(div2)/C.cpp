/*
�����еĻ������������Ȼ��ͱ��һ��
��һ�������������͵���n�ĸ���
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
vector<int> v;
int dp[50014];
int mod=1e9+7;
int re(int x)
{
    int t=0;
    while(x){
        t*=10;
        t+=x%10;
        x/=10;
    }
    return t;
}
void solve()
{
	int n;
    cin>>n;
    cout<<dp[n]<<endl;
}
signed main()
{
    int len=0;
    v.push_back(0);
    for(int i=1;i<=40002;i++){
        if(re(i)==i)v.push_back(i);
    }
    //cout<<v.size()<<endl;
    dp[0]=1;
    for(int i=1;i<v.size();i++){
        for(int j=v[i];j<=40005;j++){
            dp[j]+=dp[j-v[i]];
            dp[j]%=mod;
        }
    }
    //cout<<"end"<<endl;
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}