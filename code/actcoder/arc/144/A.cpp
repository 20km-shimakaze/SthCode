/*
��ΪҪ�����ܴ�����Ҫѡ������һλ��ż����8������ô/2�Ĵ𰸾�����4��ɵģ���ķ�ǰ��
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int dp[5003];//��i��β���������
int a[1003];
void solve()
{
	int n;
    cin>>n;
    cout<<2*n<<endl;
    if(n%4)cout<<n%4;
    for(int i=1;i<=n/4;i++){
        cout<<4;
    }puts("");
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}