/*
https://acm.hdu.edu.cn/contests/contest_showproblem.php?pid=1011&cid=1044
������1/2����1��ɾ��Ҳ��1/2��ô����������(n-m)�����ɣ�
Ȼ��ע����ĿҪ��Ҫȡģ������Ӧ���Է���ȡģ����Ԫ��
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int n,m;
const int mod=1e9+7;
inline ll ksc(ll x,ll y){
    ll res=0;
    while(y){
        if(y&1)res=(res+x)%mod;
        x=(x<<1)%mod; y>>=1;
    }return res;
}
ll qpow(ll a,ll n)
{
    if(a%mod==0)return 0;
    ll ans=1;
    while(n){
        if(n&1){
            ans=ksc(ans,a);
        }
        n>>=1;
        a=ksc(a,a);
    }
    ans%=mod;
    return ans;
}
void solve()
{
    cin>>n>>m;
    int t=qpow(2,mod-2)*(n-m)%mod;
    cout<<t<<endl;
}
signed main()
{
    int __=1;
    cin >> __;
    while (__--)
        solve();
}