#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int n;
string a,b;
void solve()
{
	cin>>n>>a>>b;
	int ta=0;//-->
	int tc=0;//<--
	string aa,bb;
	for(int i=0;i<n;i++){
		if(a[i]=='a')aa+='a';
		if(a[i]=='c')aa+='c';
		if(b[i]=='a')bb+='a';
		if(b[i]=='c')bb+='c';
	}
	if(aa!=bb){
		puts("NO");
		return;
	}
	for(int i=0;i<n;i++){
		if(a[i]==b[i])continue;
		if(a[i]=='a')ta++;
		if(a[i]=='c')tc--;
		if(ta<0||tc<0){
			puts("NO");
			return;
		}
		if(b[i]=='a')ta--;
		if(b[i]=='c')tc++;
		if(ta<0||tc<0){
			puts("NO");
			return;
		}
	}
	//printf("ta=%lld,tc=%lld\n",ta,tc);
	if(ta==0&&tc==0)puts("YES");
	else puts("NO");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}