/*
̰�ģ�ÿ��ִ�в���ֻ�Ե�һ����ĸ��Ϊǰ׺��
����ֻҪ�ҵ����һ����֮����ֲ�����1�ε�λ�ã���������ַ���
*/
#include<bits/stdc++.h>
using namespace std;
#define int long long
int vis[200];
void solve()
{
    string s;
    cin>>s;
    memset(vis,0,sizeof(vis));
    for(int i=0;i<=s.size();i++){
        vis[s[i]]++;
    }
    int j=0;
    for(;j<s.size();j++){
        if(vis[s[j]]>=2){
            vis[s[j]]--;
        }
        else break;
    }
    for(;j<s.size();j++){
        cout<<s[j];
    }
    puts("");
}
signed main()
{
    int __;
    cin>>__;
    //__=1;
    while(__--)solve();
}