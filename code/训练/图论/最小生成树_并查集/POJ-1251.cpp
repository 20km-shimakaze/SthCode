#include<stdlib.h>
#include<algorithm>
#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<bitset>
#include<queue>
#include<stack>
#include<map>
#include<set>
#include<cmath>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int fa[N];
int find(int x)
{
	return fa[x]==x?x:fa[x]=find(fa[x]);
}
struct poi
{
	int x,y,dis;
}s[N];
bool cmp(poi a,poi b)
{
	return a.dis<b.dis;
}
void solve()
{
	int n;
	while(cin>>n,n){
		int idx=0;
		for(int i=0;i<n;i++)fa[i]=i;
		for(int x=1;x<n;x++){
			char st;int num=0;
			cin>>st>>num;
			for(int i=1;i<=num;i++){
				char c;int k,t;
				cin>>c>>k;
				t=c-'A';
				s[++idx].x=st-'A';
				s[idx].y=t;
				s[idx].dis=k;
			}
		}
		sort(s+1,s+1+idx,cmp);
		// cout<<"****"<<endl;
		int ans=0;
		for(int i=1;i<=idx;i++){
			int xx=find(s[i].x);
			int yy=find(s[i].y);
			if(xx!=yy)fa[xx]=yy,ans+=s[i].dis;
		}
		cout<<ans<<endl;
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