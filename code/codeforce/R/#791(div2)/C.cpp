#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6;
int vx[maxn],vy[maxn];
struct node{
	int l,r,ans;
}t[maxn<<1][2];
int n,q;
void build(int fl,int rt,int l,int r)
{
	t[rt][fl].l=l;
	t[rt][fl].r=r;
	if(l==r)return ;
	int mid=(l+r)>>1;
	build(fl,rt<<1,l,mid);
	build(fl,rt<<1|1,mid+1,r);
}
void add(int fl,int rt,int k,int c)
{
	if(t[rt][fl].l==t[rt][fl].r)
	{
		t[rt][fl].ans+=c;
		return ;
	}
	int mid=(t[rt][fl].l+t[rt][fl].r)>>1;
	if(k<=mid)add(fl,rt<<1,k,c);
	else add(fl,rt<<1|1,k,c);
	t[rt][fl].ans=t[rt<<1][fl].ans+t[rt<<1|1][fl].ans;
}
int query(int fl,int rt,int l,int r)
{
	if(l<=t[rt][fl].l&&t[rt][fl].r<=r)
	{
		return t[rt][fl].ans;
	}
	int mid=(t[rt][fl].l+t[rt][fl].r)>>1;
	int ans=0;
	if(l<=mid)ans+=query(fl,rt<<1,l,r);
	if(r>mid)ans+=query(fl,rt<<1|1,l,r);
	return ans;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>q;
	build(0,1,1,n);
	build(1,1,1,n);
	while(q--)
	{
		int fl,x,y,xx,yy;
		cin>>fl;
		if(fl==1)
		{
			cin>>x>>y;
			if(vx[x]==0)add(1,1,x,1);
			if(vy[y]==0)add(0,1,y,1);
			vx[x]++;
			vy[y]++;
		}
		else if(fl==2)
		{
			cin>>x>>y;
			if(vx[x]==1)add(1,1,x,-1);
			if(vy[y]==1)add(0,1,y,-1);
			vx[x]--;
			vy[y]--;
		}
		else
		{
			cin>>x>>y>>xx>>yy;
			if(x>xx)swap(x,xx);
			if(y>yy)swap(y,yy);
			int ans1=query(1,1,x,xx);
			int ans2=query(0,1,y,yy);
			if(ans1==(xx-x+1)||ans2==(yy-y+1))cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}