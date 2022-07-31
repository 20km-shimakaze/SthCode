#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
int vis[300005];
int n;
int a,b;
void slove()
{
	cin>>n;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        vis[a]++;
        vis[b]++;
    }
    int flag=0;
    for(int i=1;i<=300000;i++){
        if(vis[i]==n-1){
            flag=1;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
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