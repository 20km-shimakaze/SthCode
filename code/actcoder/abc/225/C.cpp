#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
int n,m;
//wa 5 完全不理解
void slove()
{
	cin>>n>>m;
	int flag=0;
	int a1=-1,a2=-1;
	int x;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>x;
			if(i==1&&j==1){
				int mm=x;
				mm%=7;
				if(m+mm>8)flag=1;
			}
			if(j==1){
				a2=x;
				continue;
			}
			if(x-a2!=1)flag=1;
			a2=x;
		}
		if(i==1){
			a1=x;
			continue;
		}
		if(x-a1!=7)flag=1;
		a1=x;
	}
	if(flag)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
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