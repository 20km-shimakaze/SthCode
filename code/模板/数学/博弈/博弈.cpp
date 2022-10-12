//sg博弈
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int sg[1003];
int fb[200];
int vis[1003];
void fun()
{
	int t=0;
	fb[1]=1;
	fb[2]=2;
	for(int i=3;fb[i-1]<=1000;i++){
		fb[i]=fb[i-1]+fb[i-2];
	}
}
void solve()
{
	int n,m,p;
	fun();
	memset(sg,0,sizeof(sg));
	for(int i=1;i<=1001;i++){
		memset(vis,0,sizeof(vis));
		for(int j=1;fb[j]<=i;j++){
			vis[sg[i-fb[j]]]=1;
		}
		for(int j=0;j<=1001;j++){//mex
			if(!vis[j]){
				sg[i]=j;
				break;
			}
		}
	}
	while(cin>>m>>n>>p){
		if(!m&&!n&&!p)break;
		puts(sg[m]^sg[n]^sg[p]?"Fibo":"Nacci");
	}
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--)solve();
}

//Wythoff's Game
/*
有两堆石子，个数为 [公式] ；A，B轮流取石子，规定要么只取一堆的任意多个，
要么在两堆里取同样任意多个，问A先手是否有必胜策略。
奇异局势： a[k]=ceil(k*(sqrt(5)+1)/2); b[k]=a[k]+k;
*/



/*
状态转化，只看NP之间状态转移
如果是P状态，那么应该在区间内没有P状态可以转移
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a,b;
int p,k;
int sg[1000006];//1 
int su[1000006];
void solve()
{
    sg[0]=1;
    su[0]=1;
    su[1]=1;
    for(int i=2;i<=1000006;i++){
        if(su[i-1]-su[i/2-1]==0)sg[i]=1;
        su[i]=su[i-1]+sg[i];
    }
}
signed main()
{
    int __;
    cin>>__;
    while(__--)solve();
}


//反nim
/*
先手必胜的条件为
①：所有堆的石子数均=1，且有偶数堆。
②：至少有一个堆的石子数>1，且石子堆的异或和≠0。
*/

