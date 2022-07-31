#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=1e6;
vector<int>v;
string s,t;
stack<int>st;
int flag=0;

void solve()
{
	v.clear();
	cin>>s>>t;
	flag=0;
	int i=s.size()-1;
	int j=t.size()-1;
	int a,b;
	while(1)
	{
		a=s[i]-'0';
		b=t[j]-'0';
		
		if(a<=b)
		{
			v.push_back(b-a);
			i--;
			j--;
		}
		else if(a>b)
		{
			if(j==0){cout<<-1<<endl;return ;}
			b=(t[j-1]-'0')*10+t[j]-'0';
			if(b-a>=10){
				cout<<-1<<endl;
				return ;
			}
			if(b<a)
			{
				cout<<-1<<endl;
				return ;
			}
			v.push_back(b-a);
			i--;
			j-=2;
		}
		if(i==-1||j==-1)break;
	}
	if(i>=0)
	{
		cout<<-1<<endl;
		return ;
	}
	while(j>=0){
		v.push_back(t[j]-'0');j--;
	}
	int flag=0;
	for(int i=v.size()-1;i>=0;i--){
		if(v[i])flag=1;
		if(flag)cout<<v[i];
	}
	cout<<endl;
}
signed main(){
	int __;cin>>__;
	while(__--)solve();
}