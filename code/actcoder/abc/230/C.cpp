#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
//#define int long long
int n,a,b,p,q,r,s;
int maxa,maxb,mina,minb;
void slove()
{
	
    maxa=max(1-a,1-b);
    maxb=max(1-a,b-n);
    mina=min(n-a,n-b);
    minb=min(n-a,b-1);
    cin>>n>>a>>b>>p>>q>>r>>s;
    int x,y,flag;
    for(int i=p;i<=q;i++){
        for(int j=r;j<=s;j++){
            flag=0;
            x=i-a;
            y=j-b;
            if((((x==0&&y==0)||x!=y)&&abs(y)==abs(x)&&x>=maxb&&x<=minb)||(x==y&&x>=maxa&&x<=mina))flag=1;
            if(flag!=0)printf("#");
            else printf(".");
        }
        puts("");
    }
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--){
		slove();
	}
	return 0;
}