/*
贪心使用并查集优化
从前向后进行优化，优先把所有机会把前面的给变小，
后面的则通过前面变小的路径优化（前面出现过的状态，后面看可不可以一起变）
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int fa[100];
int getF(int x)
{
    return x==fa[x]?x:fa[x]=getF(fa[x]);
}
void solve()
{
	int n,k;
    string s;
    cin>>n>>k>>s;
    for(int i=0;i<=25;i++){
        fa[i]=i;
    }
    k=min(k,(ll)25);
    for(int i=0;i<s.size();i++){
        s[i]=getF(s[i]-'a')+'a';
        while(k&&s[i]!='a'){//当没有机会或者不用减小
            k--;
            int x=s[i]-'a';
            if(fa[x]==x)fa[x]=x-1;
            s[i]--;
            s[i]=getF(s[i]-'a')+'a';//更新，到s[i]更新之后也许有更好
        }
    }
    cout<<s<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}