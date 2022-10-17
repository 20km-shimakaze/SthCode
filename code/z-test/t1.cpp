#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
map<string,int>sg;
int dfs(string s)
{
    if(sg.count(s))return sg[s];
    // cout<<s<<endl;
    bitset<100>vis;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'||s[i]=='0')continue;
        if((i==0||s[i-1]!='1')&&(i==s.size()-1||s[i+1]!='1')){
            char c=s[i];
            s[i]='1';
            vis[dfs(s)]=1;
            s[i]=c;
        }
        if((i==0||s[i-1]!='0')&&(i==s.size()-1||s[i+1]!='0')){
            char c=s[i];
            s[i]='0';
            vis[dfs(s)]=1;
            s[i]=c;
        }
    }
    int mex=0;
    while(vis[mex])mex++;
    // cout<<s<<" "<<mex<<endl;
    return sg[s]=mex;
}
void solve()
{
    string s;
    cin>>s;
    cout<<dfs(s)<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}