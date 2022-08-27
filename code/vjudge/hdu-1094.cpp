/*
利用传递闭包来检查是否存在环(从i点到i点就是环)，若有环则矛盾
检查再floyd之后是否存在两点无法互相到达，若都到达证明已经可以输出排序
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,m;
int a[30][30],b[30][30];
int in[30];
int check()
{
    for(int i=1;i<=n;i++)if(a[i][i])return 2;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(!a[i][j]&&(!a[j][i]))return 0;
        }
    }
    return 1;
}
void topsort(int ans)
{
    queue<int>q;
    for(int i=1;i<=n;i++)if(!in[i])q.push(i);
    cout<<"Sorted sequence determined after "<<ans<<" relations: ";
    while(q.size()){
        int a=q.front();
        q.pop();
        cout<<(char)(a+'A'-1);
        for(int i=1;i<=n;i++){
            if(b[a][i]){
                in[i]--;
                if(!in[i])q.push(i);
            }
        }
    }
    cout<<"."<<endl;
}
void solve()
{
	while(cin>>n>>m,n|m){
        int flag=0,num=0,st=0,ans=0;
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(in,0,sizeof(in));
        for(int i=1;i<=m;i++){
            string s;
            cin>>s;
            int x=s[0]-'A'+1;
            int y=s[2]-'A'+1;
            if(!st){
                in[y]++;
                a[x][y]=b[x][y]=1;
                for(int j=1;j<=n;j++){
                    if(a[j][x])a[j][y]=1;
                    if(a[y][j])a[x][j]=1;
                    for(int k=1;k<=n;k++){
                        if(a[j][x]&&a[y][k])a[j][k]=1;
                    }
                }
                st=check();
                ans=i;
            }
        }
        if(st==2){
            cout<<"Inconsistency found after "<<ans<<" relations."<<endl;
        }
        else if(st==0){
            cout<<"Sorted sequence cannot be determined."<<endl;
        }
        else{
            topsort(ans);
        }
    }
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}