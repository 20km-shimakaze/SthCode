#include<bits/stdc++.h>
using namespace std;
int a,b,c;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if((a+c)>(2*b))//a+c���ˣ���ô����bҲ��� 
		{
			if((a+c)%(2*b)==0)
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else if((a+c)<(2*b))//Ϊ��ʹ������ȣ���ô����a������c 
		{
			if(((2*b)-a)%c==0)
			cout<<"YES"<<endl;
			else if(((2*b)-c)%a==0)
			cout<<"YES"<<endl;
			else 
			cout<<"NO"<<endl;
			 
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}