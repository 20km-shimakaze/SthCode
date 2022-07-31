#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
//三角形面积等于1/2向量相乘
struct poi
{
    int x,y;
}a[400];
void slove()
{
	int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i].x>>a[i].y;
    }
    int ans=0;
    for(int i=1;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            for(int k=j+1;k<=n;k++){
                if((a[i].x-a[j].x)*(a[i].y-a[k].y)!=(a[i].y-a[j].y)*(a[i].x-a[k].x))ans++;
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