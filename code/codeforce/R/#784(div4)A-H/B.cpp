/*
排序，暴力。考虑到题目给的是t<=1e4 n<=2e5使用vis数组暴力不可行
于是选择先排序然后一个个遍历查找有没有连续出现三个及以上的数字
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
    if(n<=2){
        cout<<-1<<endl;
        return;
    }
    sort(a+1,a+1+n);
    int flag=0;
    int sum=0,ta,ans;
    ta=a[1];
    for(int i=1;i<=n;i++){
        if(ta==a[i]){
            sum++;
            if(sum==3){
                flag=1;
                ans=ta;
                break;
            }
        }
        else{
            sum=1;
            ta=a[i];
        }
    }
    if(flag){
        cout<<ans<<endl;
    }
    else cout<<-1<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}