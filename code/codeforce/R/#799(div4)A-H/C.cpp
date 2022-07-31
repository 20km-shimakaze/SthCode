#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
char s[10][10];
int n,m;
void solve()
{
	for(int i=1;i<=8;i++){
		for(int j=1;j<=8;j++){
			cin>>s[i][j];
		}
	}
	int ax=1,ay=1;
	for(int i=2;i<=8;i++){
		for(int j=2;j<=8;j++){
			if(s[i][j]=='#'&&s[i-1][j-1]=='#'&&s[i-1][j+1]=='#'&&s[i+1][j-1]=='#'&&s[i+1][j+1]=='#'){
				ax=i,ay=j;
			}
		}
	}
	cout<<ax<<" "<<ay<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}