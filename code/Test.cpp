#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int vis[100005][2];
int n,k,x;
string s;
int di=-1;
void solve()
{
	cin>>n;
	for(int i=1;i<=3*n;i++){
		cin>>x>>s;
		if(s=="YES")vis[x][1]++;
		else vis[x][0]++;
	}
	string an;
	int su=0;
	for(int i=0;i<n;i++){
		int &yes=vis[i][1];
		int &no=vis[i][0];
		if(no>=1&&yes>=1)su++;
		if(no>=2&&yes>=2||su>=2||no==yes){
			cout<<-1<<endl;
			return;
		}
		if(yes>no)an+='1';
		else an+='0';
	}
	cout<<an<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}