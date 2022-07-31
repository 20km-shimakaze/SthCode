/*
观察可以发现其实对于偶数长度序列，这样的排序方法只会调动a[i]和a[i+1](i为奇数)
所以只需要贪心尝试交换a[i]和a[i+1]，之后再遍历看是不是已经排序完成
对于偶数长度，易得序列第一位其实是无法交换的，所以交换从第二位开始
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n,a[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(n%2){
        for(int i=2;i<=n;i+=2){
            if(a[i]>a[i+1])swap(a[i],a[i+1]);
        }
    }
    else{
        for(int i=1;i<=n;i+=2){
            if(a[i]>a[i+1])swap(a[i],a[i+1]);
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            puts("NO");
            return;
        }
    }
    puts("YES");
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}