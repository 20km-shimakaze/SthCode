/*
对于此题直接将所有字符串存入vis记录每种排列方式个数
然后对于s的每钟字符进行的贡献计算即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
string s[100005];
int vis[20][20];
void solve()
{
	cin>>n;
    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++){
        cin>>s[i];
        vis[s[i][0]-'a'][s[i][1]-'a']++;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        int t1=s[i][0]-'a';
        int t2=s[i][1]-'a';
        for(int j=0;j<=15;j++){
            if(t1!=j)ans+=vis[j][t2];
            if(t2!=j)ans+=vis[t1][j];
        }
    }
    cout<<ans/2<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}