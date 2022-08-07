#include<bits/stdc++.h>
using namespace std;
string s;
int vis[400005],n;
int main()
{
	cin>>n;
	for(int i=1;i<=n*4-1;i++){
		int x;
		cin>>x;
		vis[x]++;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]!=4)cout<<i<<endl;
	}
}