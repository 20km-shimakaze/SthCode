/*
��j=i+k���ڴ����ж���j>n-k����ôʹ��ai=j
������aiΪ���ڴ����е���С��x������|x-i|>=k
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
    for(int i=1;i<=n;i++)p.insert(i);//����û�б���ӽ�ȥ����
    for(int i=n-k+1;i<=n;i++){//�Ȱ�����j>n-k��������ӽ�ȥ
        a[i-k]=i;
        p.erase(i);
    }
    for(int i=1;i<=n;i++){
        if(a[i])continue;
        auto it=p.begin();
        int x=*it;
        if(abs(i-x)>=k)a[i]=x,p.erase(x);//��Ϊ�ֵ�������ʹ����С��
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