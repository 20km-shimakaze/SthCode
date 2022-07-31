/*
1xN格子，两个人轮流放S/O，形成SOS win
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a[2000];
unordered_map<int,int>mp;
int has(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)sum=sum*3+a[i];
    return sum;
}
int check(int n)
{
    for(int i=3;i<=n;i++){
        if(a[i]==1&&a[i-1]==2&&a[i-2]==1)return 1;
    }
    return 0;
}
void show(int n)
{
    for(int i=1;i<=n;i++)cout<<a[i]<<" ";
    puts("");
}
int dfs(int cnt,int n)
{
    int ha=has(n);
    int &res=mp[ha];
    if(res)return res;//已经求出来过
    if(check(n))return res=-1;//P
    if(cnt==n)return res=-10;//D
    int flag=0;
    for(int i=1;i<=n;i++){
        if(a[i])continue;//1S 2O
        for(int j=1;j<=2;j++){
            a[i]=j;
            int t=dfs(cnt+1,n);
            a[i]=0;
            if(t==-1)return res=1;
            if(t==-10)flag=1;
        }
    }
    return res=flag?-10:-1;
}
void solve()
{
	for(int i=1;i<=30;i++){
        mp.clear();
        memset(a,0,sizeof(a));
        int t=dfs(0,i);//从0开始到n
        printf("%lld:%lld\t",i,t);
    }
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}