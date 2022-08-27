#include<iostream>
using namespace std;
bool pd(int x)
{
	if(x==2) return true;
	for(int i=2;i*i<=x;i++)
	{
		if(x%i==0)
		return false;
	}
	return true;
}
int main()
{
	int m;
	cin>>m;//求第m个质数 
	int count=0; 
	int x=2;
	while(count!=m)
	{
		if(pd(x))
		count++;
		x++;
	}
	cout<<x-1;
	return 0;
}