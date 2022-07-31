#include<bits/stdc++.h>
using namespace std;
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