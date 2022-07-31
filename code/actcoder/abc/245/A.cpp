#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	string s1="Takahashi",s2="Aoki";
	if(a<c)cout<<s1<<endl;
	else if(c<a)cout<<s2<<endl;
	else if(b<=d)cout<<s1<<endl;
	else cout<<s2<<endl;
}