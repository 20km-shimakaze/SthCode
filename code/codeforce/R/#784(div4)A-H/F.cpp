/*
��һ�ַ�����ʹ��ǰ׺�ͺ�׺��Ȼ���ÿһ��ǰ׺���ö��ֺ�׺�ͷ���
�������ÿһ��ǰ׺��������ȵ�λ�ã���¼���ֵ�����Ǹ��Ӷ�O(nlogn)

���õ���ֱ��̰�Ĵ����߳��Գ��ǹ���˭������˭ȥ�����ԣ���¼������ȵ�ʱ���ֵ
ʱ�临�Ӷ�O(n)
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[200005];
void solve()
{
	cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans=0,l=1,r=n,ma=0,sul=a[1],sur=a[n],al=1,ar=1;
    if(n==1){
        cout<<0<<endl;
        return;
    }
    while(1){
        if(sul==sur){
            ma=al+ar;
            sul+=a[++l];
            al++;
        }
        if(r-l<=1){
            cout<<ma<<endl;
            break;
        }
        if(sul>sur){
            sur+=a[--r];
            ar++;
        }
        else sul+=a[++l],al++;
    }
}
signed main()
{
	int __;
	cin>>__;
	//__=1;
	while(__--)solve();
}