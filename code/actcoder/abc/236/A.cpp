#include<bits/stdc++.h>
using namespace std;
string s;
int a,b;
int main()
{
	cin>>s>>a>>b;
	s=" "+s;
	swap(s[a],s[b]);
	for(int i=1;i<s.size();i++)cout<<s[i];
}