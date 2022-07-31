/*
观察可以发现，其实就是要找每两个关键字之间最长的长度
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
string s;
int m,vis[30];
char c;
void solve()
{
	cin>>n>>s>>m;
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=m;i++){
        cin>>c;
        vis[c-'a']++;
    }
    int sum=0;
    int maxx=0;
    int fi=-1,ind=0;
    for(int i=0;i<n;i++){
        if(vis[s[i]-'a']){
            maxx=max(maxx,i-ind);
            ind=i;
        }
    }
    cout<<maxx<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}