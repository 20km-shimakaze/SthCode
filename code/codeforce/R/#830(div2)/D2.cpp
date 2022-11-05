//T92放弃了
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=1e6+7;
const int INF=0x3f3f3f3f3f3f3f3f;
const int mod=998244353;
map<int,int>mp1,mp2,mp3;
void solve()
{
	int q;
	cin>>q;
	while(q--){
		char op;
		int x;
		cin>>op>>x;
		if(op=='+'){
			if(mp3.count(x))mp3.erase(x);
			mp1[x]=1;
		}
		else if(op=='-'){
			mp3[x]=1;
			mp1.erase(x);
		}
		else if(op=='?'){
			int dis;
			int flag=0;
			if(!mp2.count(x)){
				for(dis=x;;dis+=x){
					if(!mp1.count(dis)){
						cout<<dis<<'\n';
						mp2[x]=dis;
						flag=1;
						break;
					}
				}
			}
			if(flag)continue;
			for(auto it=mp3.lower_bound(x);it!=mp3.end();it++){
				if(it->first>mp2[x])break;
				if((it->first)%x==0){
					flag=1;
					cout<<it->first<<'\n';
					break;
				}
			}
			if(flag)continue;
			// dis=mp2[x];
			// while(1){
			// 	if(!mp1.count(dis)){
			// 		cout<<dis<<'\n';
			// 		break;
			// 	}
			// 	dis+=x;
			// }
			// mp2[x]=dis;
			for(dis=mp2[x];;dis+=x){
				if(!mp1.count(dis)){
					cout<<dis<<'\n';
					break;
				}
			}
			mp2[x]=dis;
		}
	}
}
signed main()
{
	IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}