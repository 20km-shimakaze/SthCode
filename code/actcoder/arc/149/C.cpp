#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int s[1003][1003];
int n;
int vis[N];
void solve()
{
	cin>>n;
	if(n<=5){
		if(n==3){
			cout<<"9 5 1"<<endl;
			cout<<"3 7 8"<<endl;
			cout<<"6 2 4"<<endl;
		}
		else if(n==4){
			cout<<"15 11 16 12"<<endl;
			cout<<"13 3 6 9"<<endl;
			cout<<"14 7 8 1"<<endl;
			cout<<"4 2 10 5"<<endl;
		}
		else if(n==5){
			cout<<"5 7 11 13 17"<<endl;
			cout<<"19 23 25 21 1"<<endl;
			cout<<"3 9 15 24 8"<<endl;
			cout<<"6 12 18 2 4"<<endl;
			cout<<"10 14 16 20 22"<<endl;
		}
		return;
	}
	if(n&1){
		int num=6;
		int nu=n/2;
		for(int i=nu+2;i<=n;i++,num+=3){
			while(vis[num])num+=3;
			if(num&1){
				s[nu][i]=num;
				s[nu+1][i]=num+3;
			}
			else{
				s[nu][i]=num+3;
				s[nu+1][i]=num;
			}
			vis[num]=1;
			vis[num+3]=1;
		}
		for(int i=1;i<=nu+1;i++,num+=3){
			while(vis[num])num+=3;
			if(num&1){
				s[nu+1][i]=num;
				s[nu+2][i]=num+3;
			}
			else{
				s[nu+1][i]=num+3;
				s[nu+2][i]=num;
			}
			vis[num]=1;
			vis[num+3]=1;
		}
		num=1;
		for(int i=1;i<=nu+1;i++){
			for(int j=1;j<=n;j++){
				if(s[i][j])continue;
				while(vis[num])num+=2;
				s[i][j]=num;
				vis[num]=1;
			}
		}
		num=2;
		for(int i=nu+2;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(s[i][j])continue;
				while(vis[num])num+=2;
				s[i][j]=num;
				vis[num]=1;
			}
		}
	}
	else{
		int nu=n/2;
		int num=3;
		for(int i=1;i<=n;i++){
			while(vis[num])num+=3;
			s[nu][i]=num;
			s[nu+1][i]=num+3;
			vis[num]=1;
			vis[num+3]=1;
		}
		num=1;
		for(int i=1;i<=nu-1;i++){
			for(int j=1;j<=n;j++){
				if(s[i][j])continue;
				while(vis[num])num+=2;
				s[i][j]=num;
				vis[num]=1;
			}
		}
		num=2;
		for(int i=nu+1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(s[i][j])continue;
				while(vis[num])num+=2;
				s[i][j]=num;
				vis[num]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<s[i][j]<<" ";
		}
		cout<<endl;
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