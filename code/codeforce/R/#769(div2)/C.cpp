/*
���������Ĳ�����������b-a�Σ���ô��������һ�飬��û�в�����ʹ�ô�ɵĲ�������С
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a,b;
void solve()
{
	cin>>a>>b;
    int ans=b-a;
    for(int i=0;i<=b-a;i++){
        int aa=a+i;
        ans=min(ans,i+((aa|b)-b)+1);
        int bb=b+i;
        ans=min(ans,i+(a|bb)-bb+1);
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