#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
int n,a[N],vis[N];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        vis[i]=0;
    }
    int ans=0;
    set<int>se;
    int ma=a[1];
    for(int i=1;i<=n;i++){
        if(vis[a[i]])a[i]=0;
        if(a[i]<ma){//���ڵ�С�ڹ�ȥ������
            ma=a[i];//�����������a[i]
            for(int j:se){//����ȥ������0��ȫ�����0
                if(j==0||vis[j])continue;
                vis[j]=1;
                ans++;
            }
            se.clear();
            se.insert(a[i]);
        }
        else{
            se.insert(a[i]);
            ma=max(ma,a[i]);
        }
    }
    cout<<ans<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}