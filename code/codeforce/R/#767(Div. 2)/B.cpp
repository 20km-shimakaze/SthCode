#include <bits/stdc++.h>
using namespace std;
int n,a[104000],b[100005];
int s[104];
void solve()
{
	cin>>n;
	int aa=0,bb=0;
	int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x%2==0)a[++aa]=x;
		else b[++bb]=x;
	}
	int ok1=0,ok2=0;
	for(int i=1;i<aa;i++){
		if(a[i]>a[i+1]){
			ok1=1;
			break;
		}
	}
	for(int i=1;i<bb;i++){
		if(b[i]>b[i+1]){
			ok1=1;
			break;
		}
	}
	if(ok1)cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}
int main()
{
	int __;
	cin>>__;
	while(__--)solve();
}