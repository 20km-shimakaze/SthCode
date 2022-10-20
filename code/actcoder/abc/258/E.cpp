#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=2e5+7;
int w[2*maxn];
int a[maxn];
int v[maxn];
int p,l,h;

int32_t main()
{
	int n,q,x;
	cin>>n>>q>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i];
		w[i+n]=w[i];
	}
	for(int i=1;i<=2*n;i++)
		w[i]+=w[i-1];
	for(int i=1;;i++)
	{
		if(v[p])
		{
			l=i-v[p];
			h=v[p];
			break;
		}
		v[p]=i;
		int y=lower_bound(w,w+2*n+1,w[p]+x%(w[n]))-w;
		a[i]=y-p+x/w[n]*n;
		p=y%n;
	}
	while(q--)
	{
		int k;cin>>k;
		if(k>h)
			k=(k-h)%l+h;
		cout<<a[k]<<"\n";
	}
}