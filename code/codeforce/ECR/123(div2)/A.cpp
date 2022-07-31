#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int vis[30];
void solve()
{
	string s;
    cin>>s;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            vis[s[i]-'a']++;
        }
        else if(vis[s[i]-'A']){
            vis[s[i]-'A']--;
        }
        else{
            puts("NO");
            return;
        }
    }
    cout<<"YES"<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}