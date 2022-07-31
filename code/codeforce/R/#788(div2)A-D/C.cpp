/*
利用fa数组，记录每一个数字在b中的位置，从而跳转查询，
查询形如ai->bi bi->ac ac->ai的分块，记录数目个数，
但是如果在其中已经有被选择的了，就不要计算数目，
其答案可能性就是2^ans
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
typedef long long ll;
int n;
int mod=1e9+7;
inline ll ksc(ll x,ll y){
	ll res=0;
	while(y){
		if(y&1)res=(res+x)%mod;
		x=(x<<1)%mod; y>>=1;
	}return res;
}
ll qpow(ll a,ll n)
{
	if(a%mod==0)return 0;
	ll ans=1;
	while(n){
		if(n&1){
			ans=ksc(ans,a);
		}
		n>>=1;
		a=ksc(a,a);
	}
	ans%=mod;
	return ans;
}
int a[100005],b[100005],fa[100005],c[100005];
int vis[100005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n;i++)cin>>b[i],fa[b[i]]=i;
    for(int i=1;i<=n;i++)cin>>c[i],vis[i]=0;
    int sum=0;
    int flag;
    int t;
    for(int i=1;i<=n;i++){
        if(vis[i])continue;
        vis[i]=1;
        if(a[i]==b[i])continue;
        t=a[i];
        flag=0;
        while(1){
            t=fa[t];//next
            vis[t]=1;
            if(c[t])flag=1;
            t=a[t];
            if(a[i]==t)break;
        }
        if(!flag)sum++;
    }
    cout<<qpow((ll)2,sum)<<endl;
}
signed main(){
	int __;cin>>__;
	while(__--)solve();
}