/*
����ʳ��ȱ�ڣ�Ȼ��ͨ�õ��ܲ��ܲ�ȫ
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//#define int long long
void solve()
{
	int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    int t=max(0,x-a)+max(0,y-b);
    if(c>=t)puts("YES");
    else puts("NO");
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}