/*
˼·����ʼ�ҵ��������ֵĸ���maxx����ta��Ȼ����һ�飬
���ŰѸ��Ƶ������ϵ�taȫ���ŵ�ԭʼ������ȥ������ѭ��
�Ż������Է���������ô��������ʵת��ta�Ĵ�������n-maxx
ֻҪ�ټ���������ta���ƶ��ٴγ���n�Ϳ�����
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