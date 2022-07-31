#include<bits/stdc++.h>
using namespace std;
#define int long long
/*
从左到右一步步走，贪心想法应该是不走回头路，
然后应该会到一个地方（pos）停止向后走，
对于pos前面来说消耗最少的方法应该是一步步挪首都和征服，
对于后面来说，应该是后面的全部征服。
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