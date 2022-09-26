#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	cin>>s>>t;
	int n=t.size(),m=s.size();
	for(int i=0,j=0;i<m;i++)
	{
		while(j<n)
		{
			if(t[j]!=s[i])
				j++;
			else
				break;
		}
		if(j==n)
			return 0&puts("No");;
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(t[i]==t[0])
			cnt++;
		else
			break;
	}

	for(int i=0;i<m;i++)
	{
		if(s[i]==s[0])
			cnt--;
		else
			break;
	}

	if(cnt>0)
		puts("No");
	else
		puts("Yes");
	return 0;
}