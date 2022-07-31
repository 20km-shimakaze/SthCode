/*
观察可以得到结论，创建1和0的两个区间，确认最右边的1和最左边的0
两个区间的交集就是答案
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string s;
    cin>>s;
    int l1=0,l0=0,r1=s.size()-1,r0=s.size()-1;
    for(int i=0;i<s.size();i++){//->
        if(s[i]=='1')l1=i;
    }
    for(int i=s.size()-1;i>=0;i--){//<-
        if(s[i]=='0')r0=i;
    }
    int ans=0;
    ans=min(r0,r1)-max(l0,l1)+1;
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}