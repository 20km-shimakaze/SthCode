#include<bits/stdc++.h> 
#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<string.h> 
typedef long long ll;
using namespace std;
const int N = 2e5+10;
const int mod = 1e9+7;
ll a[N],b[N],c[N];
//string s1[N],s2[N],s3[N];
int main(void)
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n,m;
		cin >> n >> m;
		ll k=1;
		int c2=0,c5=0;
		int nn = n;
		while(nn%2==0)
		{
			c2++;
			nn/=2;
		}
		nn=n;
		while(nn%5==0)
		{
			c5++;
			nn/=5;
		}
		int d = abs(c2-c5);
		if(c2>c5)
		{
			while(d--&&k*5<=m)
			{
				k*=5;
			}
		}
		else
		{
			while(d--&&k*2<=m)
			{
				k*=2;
			}
		}
		//cout << k << endl;
		while(k*10<=m)
		{
			k*=10;
		}
		for(int i=1;i<=10;i++)
		{
			if(k*i>m)
			{
				k*=(i-1);
				break;
			}
		}
		cout << n*k << endl;
	} 
	return 0;
 } 