#include<bits/stdc++.h>
using namespace std;
#define ll long long
int vis[30];
string s,t;
void slove()
{
    cin>>s>>t;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<s.size();i++){
        vis[s[i]-'a']++;
    }
    int flag=0;
    if(vis[0]&&vis[1]&&vis[2])flag=1;
    if(t=="abc"&&flag){
        for(int i=0;i<26;i++){
            int pos=i;
            if(pos==2)pos=1;
            else if(pos==1)pos=2;
            for(int j=0;j<vis[pos];j++){
                cout<<char('a'+pos);
            }
        }
    }
    else{
        for(int i=0;i<26;i++){
            int pos=i;
            for(int j=0;j<vis[pos];j++){
                cout<<char('a'+pos);
            }
        }
    }
    puts("");
}
int main()
{
    int __;
    cin>>__;
    while(__--)slove();
}