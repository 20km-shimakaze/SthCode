/*
当j=i+k不在答案序列而且j>n-k，那么使得ai=j
否则，让ai为不在答案序列的最小数x，满足|x-i|>=k
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
typedef pair<int,int> P;
int n,k;
int a[300005];
set<int>p;
void solve()
{
	cin>>n>>k;
    if(2*k>n){
        cout<<-1<<endl;
        return ;
    }
    for(int i=1;i<=n;i++)p.insert(i);//所有没有被添加进去的数
    for(int i=n-k+1;i<=n;i++){//先把所有j>n-k的数先添加进去
        a[i-k]=i;
        p.erase(i);
    }
    for(int i=1;i<=n;i++){
        if(a[i])continue;
        auto it=p.begin();
        int x=*it;
        if(abs(i-x)>=k)a[i]=x,p.erase(x);//因为字典序，优先使用最小的
        else{
            auto t=p.lower_bound(i+k);
            int y=*t;
            a[i]=y;
            p.erase(y);
        }
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}