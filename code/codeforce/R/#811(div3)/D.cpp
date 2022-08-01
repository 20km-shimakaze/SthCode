/*
直接暴力跑，尝试对每一个位置都匹配最长的字符串
如果没有就后退一格，继续匹配，但是不能到之前尝试匹配的位置上
最后检查是否把所有的都匹配上了即可
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int n;
string s;
map<string ,int>mp;
vector<P>v;
int vis[103],v1[103];
void solve()
{
	cin>>s>>n;
    mp.clear();
    v.clear();
    for(int i=1;i<=n;i++){
        string t;
        cin>>t;
        mp[t]=i;
    }
    memset(v1,0,sizeof(v1));
    memset(vis,0,sizeof(vis));
    int len=s.size();
    int di=0;
    while(1){
        //cout<<di<<endl;
        if(di==len)break;
        if(di<0||v1[di]){
            //cout<<"*"<<v1[di]<<" "<<di<<endl;
            cout<<-1<<endl;
            return;
        }
        v1[di]=1;
        string t;
        int id=0,an=0;
        for(int i=di,k=0;i<len&&k<=11;i++,k++){
            t+=s[i];
            if(mp[t])an=k+1,id=mp[t];
        }
        if(id){
            for(int i=0;i<an;i++)vis[i+di]=1;
            v.push_back({id,di+1});
            di+=an;
        }
        else di--;
    }
    for(int i=0;i<len;i++){
        if(!vis[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second<<endl;
}
signed main()
{
	int __=1;
	cin >> __;
	while (__--)
		solve();
}