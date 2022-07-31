/*
有一种方法是使用前缀和后缀和然后对每一个前缀和用二分后缀和方法
计算对于每一个前缀和与它相等的位置，记录最大值，但是复杂度O(nlogn)

我用的是直接贪心从两边尝试吃糖果，谁数量少谁去继续吃，记录其中相等的时候的值
时间复杂度O(n)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0,l=1,r=n,ma=0,sul=a[1],sur=a[n],al=1,ar=1;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    while(1){
        if(sul==sur){
            ma=al+ar;
            sul+=a[++l];
            al++;
        }
        if(r-l<=1){
            cout<<ma<<endl;
            break;
        }
        if(sul>sur){
            sur+=a[--r];
            ar++;
        }
        else sul+=a[++l],al++;
    }
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}