/*
ֱ�ӵ�26���ƿ�һ����������Ȼ��Ҫȥ��aa��bb�����Ĵ��ڣ�ֻҪ��ȥmin(a,b)����
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