/*
直接当26进制看一样处理方法，然后要去掉aa，bb这样的存在，只要减去min(a,b)即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	string s;
    cin>>s;
    int a=s[0]-'a';
    int b=s[1]-'a';
    int ans=a*26+b;
    ans-=a;
    if(b>=a)ans--;
    cout<<ans+1<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}