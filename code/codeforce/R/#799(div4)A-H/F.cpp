#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int vis[14];
void solve()
{
	int n,x;
	cin>>n;
	memset(vis,0,sizeof(vis));
	for(int i=1;i<=n;i++){
		cin>>x;
		vis[x%10]++;
	}
	for(int i=0;i<10;i++){
		if(!vis[i])continue;
		vis[i]--;
		for(int j=i;j<10;j++){
			if(!vis[j])continue;
			vis[j]--;
			for(int k=j;k<10;k++){
				if(!vis[k])continue;
				if((i+j+k)%10==3){
					puts("YES");
					return;
				}
			}
			vis[j]++;
		}
		vis[i]++;
	}
	puts("NO");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}