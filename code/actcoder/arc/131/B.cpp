#include<iostream>
using namespace std;
#define ll long long
//#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
char s[702][702];
int h,w;
int flag=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
char ss[5]={1,2,3,4,5};
 
int ww,hh;
int OK(int x,int y)
{
    if(x<=h&&y<=w&&x>=1&&y>=1)return 1;
    return 0;
}
void dfs(int x,int y)
{
    if(flag)return;
    if(y==ww){
        dfs(x+1,1);
        return;
    }
    if(x==hh){
        flag=1;
        for(int i=1;i<=h;i++){
            for(int j=1;j<=w;j++){
                cout<<s[i][j];
            }
            puts("");
        }
        return;
    }
    if(s[x][y]!='.'){
    	if(y==w+1)cout<<endl; 
        //cout<<x<<" "<<y<<"*";
        dfs(x,y+1);
    }
    int vis[6];
    char t=s[x][y];
    for(int i=0;i<=5;i++)vis[i]=1;
    for(int i=0;i<4;i++){
        int xx=x+dx[i];
        int yy=dy[i]+y;
        if(OK(xx,yy)){
            vis[s[xx][yy]-'0']=0;
        }
    }
    //cout<<x<<" "<<y<<endl;
    for(int i=1;i<=5;i++){
        if(!vis[i])continue;
        s[x][y]='0'+i;
        dfs(x,y+1);
        s[x][y]='.';
    }
}
void slove()
{
    cin>>h>>w;
    ww=w+1;
    hh=h+1;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>s[i][j];
        }
    }
    dfs(1,1);
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--){
		slove();
	}
	return 0;
}