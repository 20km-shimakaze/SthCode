/*
按到范围3e3就说明可以n^2，暴力建边，然后bfs直接跑答案
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n;
int sx,sy,ex,ey;
struct poi
{
	int x,y,r;
}s[N];
vector<int>v[N];
int check(int i,int j)
{
	int ax=s[i].x,ay=s[i].y,bx=s[j].x,by=s[j].y;
	return (ax-bx)*(ax-bx)+(ay-by)*(ay-by)<=(s[i].r+s[j].r)*(s[i].r+s[j].r)&&(ax-bx)*(ax-bx)+(ay-by)*(ay-by)>=(s[i].r-s[j].r)*(s[i].r-s[j].r);
}
int vis[N];
void solve()
{
	cin>>n>>sx>>sy>>ex>>ey;
	int si,ei;
	for(int i=1;i<=n;i++){
		cin>>s[i].x>>s[i].y>>s[i].r;
		if((sx-s[i].x)*(sx-s[i].x)+(sy-s[i].y)*(sy-s[i].y)==s[i].r*s[i].r)si=i;
		if((ex-s[i].x)*(ex-s[i].x)+(ey-s[i].y)*(ey-s[i].y)==s[i].r*s[i].r)ei=i;
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(check(i,j)){
				v[i].push_back(j);
				v[j].push_back(i);
			}
		}
	}
	queue<int>q;
	q.push(si);
	while(q.size()){
		int a=q.front();
		q.pop();
		if(a==ei){
			cout<<"Yes"<<endl;
			return;
		}
		if(vis[a])continue;
		vis[a]=1;
		for(int di:v[a]){
			q.push(di);
		}
	}
	cout<<"No"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}