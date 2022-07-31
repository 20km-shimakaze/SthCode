#include <bits/stdc++.h>
using namespace std;
int n,a[1040];
int s[104];
void solve()
{
	cin>>n;
	int i;
	for(i=1;i<=n;i++)cin>>a[i];
	for(i=1;i<=n;i++){
		if(i!=a[i])break;
		else cout<<i<<" ";
	}
	//puts("*");
	int num=i;
	for(int j=n;j>=1;j--){
		if(a[j]==i){
			num=j;
			break;
		}
	}
	//cout<<num<<endl;
	for(int j=num;j>=i&&j<=n;j--)cout<<a[j]<<" ";
	//puts("&");
	for(num++;num<=n;num++)cout<<a[num]<<" ";
	puts("");
}
int main()
{
	int __;
	cin>>__;
	while(__--)solve();
}