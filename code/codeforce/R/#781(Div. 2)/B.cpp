/*
思路：开始找到最多的数字的个数maxx和数ta，然后复制一遍，
接着把复制的数组上的ta全部放到原始数组上去，依次循环
优化：可以发现无论怎么操作，其实转移ta的次数都是n-maxx
只要再计算数组中ta复制多少次超过n就可以了
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,a[100005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    int sum=0,ts=a[1],maxx=-1,ta;
    for(int i=1;i<=n;i++){
        if(ts==a[i]){
            sum++;
            if(sum>maxx){
                ta=ts;
                maxx=sum;
            }
        }
        else{
            sum=1;
            ts=a[i];
        }
    }
    //cout<<ta<<" "<<maxx<<endl;
    int ans=0,t=maxx;
    ans+=(n-maxx);
    while(t<n){
        t*=2;
        ans++;
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}