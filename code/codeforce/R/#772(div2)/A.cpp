//�����ans|a[i]=ans ʣ�µ�ȫ��|����
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
void solve()
{
	int ans=0;
	cin>>n;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		ans|=x;
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}