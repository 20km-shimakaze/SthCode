#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
struct poi
{
	int a,b;
}a[300005];
bool cmp(poi a,poi b)
{
	return a.a>b.a;
}
void slove()
{
	int n,w;
	cin>>n>>w;
	for(int i=1;i<=n;i++){
		cin>>a[i].a>>a[i].b;
	}
	sort(a+1,a+1+n,cmp);
	int ans=0;
	for(int i=1;i<=n;i++){
		if(w>=a[i].b){
			w-=a[i].b;
			ans+=a[i].b*a[i].a;
		}
		else{
			ans+=a[i].a*w;
			break;
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
//贪心，优先加每克幸福度最高的奶酪