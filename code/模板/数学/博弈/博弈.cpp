//sg����
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
������ʯ�ӣ�����Ϊ [��ʽ] ��A��B����ȡʯ�ӣ��涨Ҫôֻȡһ�ѵ���������
Ҫô��������ȡͬ������������A�����Ƿ��б�ʤ���ԡ�
������ƣ� a[k]=ceil(k*(sqrt(5)+1)/2); b[k]=a[k]+k;
*/



/*
״̬ת����ֻ��NP֮��״̬ת��
�����P״̬����ôӦ����������û��P״̬����ת��
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


//��nim
/*
���ֱ�ʤ������Ϊ
�٣����жѵ�ʯ������=1������ż���ѡ�
�ڣ�������һ���ѵ�ʯ����>1����ʯ�Ӷѵ����͡�0��
*/

