#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
int a[60][60],h,w;
void slove()
{
	cin>>h>>w;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>a[i][j];
        }
    }
    string ans="Yes";
    for(int i=1;i<h;i++){
        for(int j=i+1;j<=h;j++){
            for(int k=1;k<w;k++){
                for(int l=k+1;l<=w;l++){
                    if(a[i][k]+a[j][l]>a[j][k]+a[i][l])ans="No";
                }
            }
        }
    }
    cout<<ans<<endl;
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