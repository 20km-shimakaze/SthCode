#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int h,w,rs,cs,n,q;
vector<vector<int>>X,Y;
map<int,int>xx,yy;
int x,y;
int num_x,num_y;
void solve()
{
	cin>>h>>w>>rs>>cs>>n;
	x=rs,y=cs;
	for(int i=1;i<=n;i++){
		int r,c;
		cin>>r>>c;
		if(!xx.count(r)){
			xx[r]=num_x++;
			X.push_back({c});
		}
		else X[xx[r]].push_back(c);

		if(!yy.count(c)){
			yy[c]=num_y++;
			Y.push_back({r});
		}
		else Y[yy[c]].push_back(r);
	}
	for(int i=0;i<X.size();i++){
		sort(X[i].begin(),X[i].end());
	}
	for(int i=0;i<Y.size();i++){
		sort(Y[i].begin(),Y[i].end());
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		char d;int l;
		cin>>d>>l;
		if(d=='U'){
			if(!yy.count(y)){
				x=max(x-l,1ll);
				cout<<x<<" "<<y<<endl;
				continue;
			}
			int ty=yy[y];
			int di=upper_bound(Y[ty].begin(),Y[ty].end(),x)-Y[ty].begin()-1;
			if(di==-1){
				x=max(x-l,1ll);
			}
			else{
				int dis=Y[ty][di];
				if(x-dis<=l){
					x=dis+1;
				}
				else{
					x-=l;
				}
			}
		}
		else if(d=='D'){
			if(!yy.count(y)){
				x=min(x+l,h);
				cout<<x<<" "<<y<<endl;
				continue;
			}
			int ty=yy[y];
			int di=upper_bound(Y[ty].begin(),Y[ty].end(),x)-Y[ty].begin();
			if(di==Y[ty].size()){
				x=min(x+l,h);
			}
			else{
				int dis=Y[ty][di];
				if(dis-x<=l){
					x=dis-1;
				}
				else{
					x+=l;
				}
			}
		}
		else if(d=='L'){
			if(!xx.count(x)){
				y=max(y-l,1ll);
				cout<<x<<" "<<y<<endl;
				continue;
			}
			int tx=xx[x];
			int di=upper_bound(X[tx].begin(),X[tx].end(),y)-X[tx].begin()-1;
			if(di==-1){
				y=max(y-l,1ll);
			}
			else{
				int dis=X[tx][di];
				if(y-dis<=l){
					y=dis+1;
				}
				else{
					y-=l;
				}
			}
		}
		else if(d=='R'){
			if(!xx.count(x)){
				y=min(y+l,w);
				cout<<x<<" "<<y<<endl;
				continue;
			}
			int tx=xx[x];
			int di=upper_bound(X[tx].begin(),X[tx].end(),y)-X[tx].begin();
			if(di==X[tx].size()){
				y=min(y+l,w);
			}
			else{
				int dis=X[tx][di];
				if(dis-y<=l){
					y=dis-1;
				}
				else{
					y+=l;
				}
			}
		}
		cout<<x<<" "<<y<<endl;
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