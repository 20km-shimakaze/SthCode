#include<iostream>
using namespace std;
#define ll long long
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
char s[3][3];
int vis[3][3];
void slove()
{
    int ans=0;
	for(int i=1;i<=2;i++){
        for(int j=1;j<=2;j++){
            cin>>s[i][j];
            if(s[i][j]=='#')ans++;
        }
    }
    if(ans==3||ans==4)cout<<"Yes"<<endl;
    else if(ans==2){
        if(s[1][1]==s[2][2])cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
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
//#数量大于1，且#都相连