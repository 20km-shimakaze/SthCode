#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string sub(string x,string y)
{   
    int n,m,lon,shor,i,fx=0,fy=0;
    string s;
    n=x.length(),m=y.length();
	lon=max(m,n),shor=min(m,n);
	for(i=0;i<lon-shor+1;i++)
	{
		if(x.length()<=lon)x="0"+x;
		if(y.length()<=lon)y="0"+y;
	}
	for(i=0;i<=lon;i++)
	{
		if(x[i]!=y[i])
		{
		if(x[i]>y[i])fx=1;
		else fy=1;	
		break;
		}
	}
	if(i>lon){
		s="0";
		return s;
	}
	reverse(x.begin(),x.end());
	reverse(y.begin(),y.end());
	if(fx)//x-y>0
	{
		for(i=0;i<=lon;i++){	
		x[i]=x[i]-y[i]+48;
		if(x[i]<'0')x[i]+=10,x[i+1]--;
	}
	}
	else if(fy)//y-x>0
	{
	cout<<"-";
	for(i=0;i<=lon;i++)
	{	
		y[i]=y[i]-x[i]+48;
		if(y[i]<'0')y[i]+=10,y[i+1]--;
	}
	x=y;
    }
	for(i=lon;i>0;i--)
	{
		if(x[i]!='0')break;
		else x.erase(i,1);
	}
	if(x[lon]=='0')x.erase(lon,1);
	reverse(x.begin(),x.end());
    s=x;
	return s;
}
void solve()
{
    int n;
    string s;
    cin>>n>>s;
    int su=0;
    string a;
    if(s[0]=='9'){
        for(int i=1;i<=n+1;i++){
            a+='1';
        }
    }
    else{
        for(int i=0;i<n;i++){
            a+='9';
        }
    }
    cout<<sub(a,s)<<endl;
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}