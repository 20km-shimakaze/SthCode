#include<bits/stdc++.h>
#define ll long long
#define int long long
#define mod 998244353
#define G 3
const int N=1350000;
using namespace std;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
int qpow(int a,int t=mod-2)
{
    int ans=1;
    while(t){
        if(t&1)ans=(ans*a)%mod;
        a=(a*a)%mod;
        t>>=1;
    }
    return ans;
}
int n,m,tr[N<<1];
int f[N<<1],g[N<<1],invn;
const int invG=qpow(G);
void NTT(int *f,bool op)
{
    for(int i=0;i<n;i++){
        if(i<tr[i])swap(f[i],f[tr[i]]);
    }
    for(int p=2;p<=n;p<<=1){
        int len=p>>1,tG=qpow(op?G:invG,(mod-1)/p);
        for(int k=0;k<n;k+=p){
            int buf=1;
            for(int l=k;l<k+len;l++){
                int tt=buf*f[len+l]%mod;
                f[len+l]=(f[l]-tt+mod)%mod;
                f[l]=(f[l]+tt)%mod;
                buf=buf*tG%mod;
            }
        }
    }
}
signed main()
{
    cin>>n>>m;
    n++,m++;
    for(int i=0;i<n;i++)f[i]=read();
    for(int i=0;i<m;i++)g[i]=read();
    for(m+=n,n=1;n<m;n<<=1);
    for(int i=0;i<n;i++){
        tr[i]=(tr[i>>1]>>1)|((i&1)?n>>1:0);
    }
    NTT(f,1),NTT(g,1);
    for(int i=0;i<n;i++)f[i]=f[i]*g[i]%mod;
    //for(int i=0;i<n;i++)cout<<f[i]<<" ";
    NTT(f,0);
    invn=qpow(n);   
    for(int i=0;i<m-1;i++){
        cout<<(int)(f[i]*invn%mod)<<" ";
    }
}