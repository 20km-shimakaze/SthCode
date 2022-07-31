#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
struct node
{
	int l,r;
	int sum;
}t[1000006];
void build(int k,int l,int r)
{
	t[k].l=l;
	t[k].r=r;
	t[k].sum=0;
	if(l==r)return ;
	int mid=(l+r)>>1;
	build(k*2,l,mid);
	build(2*k+1,mid+1,r);
}
void insert(int k,int pos)
{
	t[k].sum++;
	if(t[k].l==t[k].r)return ;
	int mid=(t[k].l+t[k].r)/2;
	if(pos<=mid)insert(k<<1,pos);
	else insert(k*2+1,pos);
}
ll query(int k,int l,int r)
{
	if(l<=t[k].l&&t[k].r<=r){
		return t[k].sum;
	}
	ll ans=0;
	int mid=(t[k].l+t[k].r)/2;
	if(l<=mid)ans+=query(k*2,l,r);
	if(r>mid)ans+=query(k*2+1,l,r);
	return ans;
}
void solve()
{
    int n;
	cin>>n;
	build(1,1,n);
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		int aa;
		cin>>aa;
		ans+=query(1,aa,n);
		insert(1,aa);
	}
	cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	while(__--)solve();
}