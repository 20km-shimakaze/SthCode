/*
̰�ģ��ȿ�ʼ�������Ѿ�ȷ����xyλ����1���ȼ�ȥ��Ȼ����ʵ���Է������е���ʵ�ǿ���ͨ�����ϸ���ʹ��
��ʵ���е��������Դյ�������ֻ��Ҫ�����һ�����ۿ��Դճ������ֵ����Ƚϼ���
*/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
int a,s;
void solve()
{
    cin>>a>>s;
    vector<int>vis(60,0);
    int sum=0;
    for(int i=0;i<60;i++){
        vis[i]+=(a>>i)&1;
        if(vis[i])sum+=(2ll<<i);
    }
    if(sum>s){
        cout<<"No"<<endl;
        return;
    }
    s-=sum;
    for(int i=59;i>=0;i--){
        if(vis[i])continue;
        int x=1ll<<i;
        if(x<=s)s-=x;
    }
    if(!s)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
signed main()
{
    //IOS
    int __=1;
    cin >> __;
    while (__--)
        solve();
}