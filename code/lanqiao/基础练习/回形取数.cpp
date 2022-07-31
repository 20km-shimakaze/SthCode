#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define P pair<int,int>
struct poi
{
    int first,second,i;
};
int vis[204][204],s[204][204];
int n,m;
queue<poi>q;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int OK(int x,int y)
{
    if(x>=1&&y>=1&&x<=m&&y<=n&&vis[x][y]==0)return 1;
    return 0;
}
void slove()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
	poi a,b;
    a.first=1;
    a.second=1;
    a.i=0;
    q.push(a);
    while(!q.empty()){
        a=q.front();
        q.pop();
        cout<<s[a.first][a.second]<<" ";
        vis[a.first][a.second]=1;
        int xx=a.first+dx[a.i];
        int yy=a.second+dy[a.i];
        if(OK(xx,yy)){
            q.push({xx,yy,a.i});
        }
        else{
            a.i=(a.i+1)%4;
            xx=a.first+dx[a.i];
            yy=a.second+dy[a.i];
            if(OK(xx,yy))q.push({xx,yy,a.i});
        }
    }
}
signed main()
{
	int __;
	//cin>>__;
	__ = 1;
	while (__--)
	{
		slove();
	}
	return 0;
}