#include<bits/stdc++.h>
using namespace std;
#define int long long
/*
������һ�����ߣ�̰���뷨Ӧ���ǲ��߻�ͷ·��
Ȼ��Ӧ�ûᵽһ���ط���pos��ֹͣ����ߣ�
����posǰ����˵�������ٵķ���Ӧ����һ����Ų�׶���������
���ں�����˵��Ӧ���Ǻ����ȫ��������
*/
int n,a,b;
int pos[200005],sum[200005];
void solve()
{
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		cin>>pos[i];
		sum[i]=pos[i]+sum[i-1];
	}
	int ans=sum[n]*b;
	for(int i=1;i<=n;i++){
		int t1=(sum[n]-sum[i]-(n-i)*pos[i])*b;
		int t2=pos[i]*b;
		int t3=pos[i]*a;
		ans=min(ans,t1+t2+t3);
	}
	cout<<ans<<endl;
}
signed main(){
    int t;cin>>t;while(t--)
    solve();
    return 0 ;
}