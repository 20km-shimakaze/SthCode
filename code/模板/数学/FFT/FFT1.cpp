#include<bits/stdc++.h>
using namespace std;
struct Comp
{
    double x,y;
    Comp(double _x=0,double _y=0){
        x=_x;
        y=_y;
    }
    Comp operator +(const Comp &b){
        return Comp(x+b.x,y+b.y);
    }
    Comp operator -(const Comp &b){
        return Comp(x-b.x,y-b.y);
    }
    Comp operator *(const Comp &b){
        return Comp(x*b.x-y*b.y,x*b.y+y*b.x);
    }
};

const int maxn=4e6+7;
const double PI=acos(-1);
int rev[maxn];
void FFT(Comp *a,int N,int inv)
{
    int bit=0;
    //while((1<<bit)<N)bit++;//求N有多少位
    for( ; (1 << bit) < N ; ++bit );
    for(int i=0;i<N;i++){
        rev[i]=(rev[i>>1]>>1)|((i&1)<<(bit-1));
        if(i<rev[i])swap(a[i],a[rev[i]]);
    }

    for(int mid=1;mid<N;mid<<=1){
        Comp tmp(cos(PI/mid),inv*sin(PI/mid));
        for(int i=0;i<N;i+=mid*2){
            Comp ome(1,0);
            for(int j=0;j<mid;j++,ome=ome*tmp){
                Comp x=a[i+j],y=ome*a[i+j+mid];
                a[i+j]=x+y,a[i+j+mid]=x-y;
            }
        }
    }
}
Comp a[maxn],b[maxn];
string s;
int ans[maxn];
signed main()
{
    int n=INT_MIN;
    cin>>s;
    n=max(n,(int)s.size());
    for(int i=0;i<s.size();i++)a[i].x=s[n-i-1]-'0';
    cin>>s;
    n=max(n,(int)s.size());
    for(int i=0;i<s.size();i++)b[i].x=s[n-i-1]-'0';
    int len=1;
    while(len<2*n)len<<=1;
    FFT(a,len,1);
    FFT(b,len,1);
    for(int i=0;i<=len;i++)a[i]=a[i]*b[i];
    FFT(a,len,-1);
    for(int i=0;i<=len;i++){
        //ans[i]+=ceil(a[i].x/len);
        ans[i] += (int)(a[i].x / len + 0.5);
        if(ans[i]>=10){
            ans[i+1]+=ans[i]/10;
            ans[i]%=10;
            if(i==len)len++;
        }
    }
    while(ans[len]==0&&len>=1)len--;
    len++;
    while(--len>=0)cout<<ans[len];
}