#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
using ull=unsigned long long;
using ll=long long;
using pii=pair<int,int>;
const int dx[]={0,0,1,-1,1,-1,1,-1};
const int dy[]={1,-1,0,0,1,-1,-1,1};
const int mod=998244353;
const int inf=0x3f3f3f3f;
const int INF=1e9+7;
const int maxn=1e6+100;
int p[maxn];
int n,m,k;
void solve()
{
	cin>>n>>m>>k;
	for(int i=1;i<=m;i++)
		cin>>p[i];
	sort(p+1,p+1+m,[&](int a,int b){
		return a>b;
	});
	set<int>st;
	for(int i=1;i<=m;i++)
	{
		int x=(p[i]-1)*k+1;
		while(st.count(x))x++;
		st.insert(x);
		if(x>n){
			cout<<"NO"<<endl;;
			return ;
		}
	}
	cout<<"YES"<<endl;
}
signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	int __;cin>>__;
	while(__--)
		solve();
	return 0;
}