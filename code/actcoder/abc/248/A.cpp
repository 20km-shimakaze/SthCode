#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
/*
遍历 使用标记数组求不存在的那一位
*/
string s;
int vis[100];
void solve()
{
	cin>>s;
    for(int i=0;i<s.size();i++){
        vis[s[i]-'0']=1;
    }
    for(int i=0;i<=9;i++){
        if(!vis[i])cout<<i<<endl;
    }
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}