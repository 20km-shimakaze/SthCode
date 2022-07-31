/*
假设只有1x2的格子，这样从后面往前面看一个个弄黑色，特判j=1的情况
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
char s[103][103];
int n,m;
struct poi
{
    int a,b,c,d;
};
vector<poi>v;
void solve()
{
	cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>s[i][j];
        }
    }
    if(s[1][1]=='1'){
        cout<<-1<<endl;
        return;
    }
    v.clear();
    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            if(s[i][j]=='1'&&j!=1)v.push_back({i,j-1,i,j});
            if(s[i][j]=='1'&&j==1)v.push_back({i-1,1,i,1});
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].a<<" "<<v[i].b<<" "<<v[i].c<<" "<<v[i].d<<endl;
    }
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}