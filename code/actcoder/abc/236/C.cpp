/*
直接用map检查每个是否存在，存在就是yes
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
vector<string>v;
int n,m;
map<string,int>mp;
void solve()
{
	cin>>n>>m;
    string x;
    for(int i=1;i<=n;i++){
        cin>>x;
        v.push_back(x);
    }
    for(int i=1;i<=m;i++){
        cin>>x;
        mp[x]++;
    }
    for(auto s:v){
        if(mp[s])puts("Yes");
        else puts("No");
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}