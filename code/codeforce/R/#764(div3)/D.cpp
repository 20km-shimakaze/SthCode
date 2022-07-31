#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n,k;
string s;
int vis[30];
void solve()
{
	cin>>n>>k>>s;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<s.size();i++){
        vis[s[i]-'a']++;
    }
    int cnt2=0,cnt1=0;
    for(int i=0;i<26;i++){
        cnt2+=vis[i]/2;
        cnt1+=vis[i]%2;
    }
    cnt1+=2*(cnt2%k);//多出来的当做单个使用
    cout<<2*(cnt2/k)+(cnt1>=k?1:0)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}