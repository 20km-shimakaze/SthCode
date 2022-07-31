/*
考虑到索引奇数位和偶数位只能同时+1，当能使数组全部为同一奇偶性时，
单独看数组的奇数位和偶数位应当是同一奇偶性，判断即可
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[100];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int t1=a[1]&1,flag1=0;
    int t2=a[2]&1,flag2=0;
    for(int i=1;i<=n;i+=2){
        if(t1!=(a[i]&1)){
            flag1=1;
            break;
        }
    }
    for(int i=2;i<=n;i+=2){
        if(t2!=(a[i]&1)){
            flag2=1;
            break;
        }
    }
    if(flag1||flag2){
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}