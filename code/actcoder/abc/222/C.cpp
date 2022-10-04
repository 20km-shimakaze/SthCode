#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
char s[103][103];
int n,m;
struct poi
{
	int id,num;
}win[N];
int check(char a,char b)//GCP
{
	if(a=='G'){
		if(b=='G')return 0;
		if(b=='C')return 1;
		if(b=='P')return -1;
	}
	else if(a=='C'){
		if(b=='G')return -1;
		if(b=='C')return 0;
		if(b=='P')return 1;
	}
	else{
		if(b=='G')return 1;
		if(b=='C')return -1;
		if(b=='P')return 0;
	}
	return 0;
}
void solve()
{
	cin>>n>>m;
	for(int i=1;i<=2*n;i++){
		win[i].id=i;
		getchar();
		for(int j=1;j<=m;j++){
			scanf("%c",&s[i][j]);
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int t=check(s[win[(j-1)*2+1].id][i],s[win[(j-1)*2+2].id][i]);
			// cout<<win[(j-1)*2+1].id<<" &&& "<<win[(j-1)*2+2].id<<endl;
			if(t==1)win[(j-1)*2+1].num++;
			else if(t==-1)win[(j-1)*2+2].num++;
		}
		// cout<<endl;
		sort(win+1,win+1+2*n,[&](poi a,poi b){
			if(a.num==b.num)return a.id<b.id;
			return a.num>b.num;
		});
	}
	for(int i=1;i<=2*n;i++)win[i].num=i;
	// sort(win+1,win+1+2*n,[&](poi a,poi b){
	// 	return a.id<b.id;
	// });
	for(int i=1;i<=2*n;i++)cout<<win[i].id<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}