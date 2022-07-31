#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
int fa[100005];
int ma[100005];
int n,q,x,y;
int find(int x)
{
	while(fa[x]!=x){
		x=fa[x];
	}
	return x;
}
int findma(int x)
{
	while(ma[x]!=x){
		x=ma[x];
	}
	return x;
}
void lian(int x,int y)
{
	fa[y]=x;
	ma[x]=y;
	return;
}
void out(int x)
{
	int tou=find(x);
	x=tou;
	vector<int>vec;
	vec.push_back(x);
	while(x!=ma[x]){
		x=ma[x];
		vec.push_back(x);
	}
	cout<<vec.size()<<" ";
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<" ";
	}
	puts("");
}
void slove()
{
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		fa[i]=i;
	}
	for(int i=1;i<=n;i++){
		ma[i]=i;
	}
	int m;
	for(int i=1;i<=q;i++){
		cin>>m;
		if(m==1){
			cin>>x>>y;
			lian(x,y);
		}
		else if(m==2){
			cin>>x>>y;
			fa[y]=y;
			ma[x]=x;
		}
		else if(m==3){
			cin>>x;
			out(x);
		}
	}
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