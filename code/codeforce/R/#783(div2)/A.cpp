/*
̰�ģ����죬���Կ��Ǵ����Ͻ�һ·��б�ŵ����Ӧ���У�
Ȼ�����ڲ������ظ���һ���ķ���������ͬһ������ʵ������������Ҫ������4����������һ��ֻҪһ��
ע������ ����Ϊһ��ֱ�ߵ�ʱ��
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
void solve()
{
	int n,m;
    cin>>n>>m;
    if(n==1||m==1){
        if(max(n,m)>2){
            cout<<-1<<endl;
        }
        else if(max(n,m)==2) cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    int ans=0;
    int t=min(n,m);
    ans+=2*(t-1);
    n-=t;
    m-=t;
    int ts=max(n,m);
    int tt=ts%2;
    ans+=4*(ts/2);
    if(tt)ans++;
    cout<<ans<<endl;
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}