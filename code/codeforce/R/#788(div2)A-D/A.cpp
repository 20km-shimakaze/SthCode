/*
̰�ģ������еĸ����ֻ�������ȫ����ǰ��ģ�Ȼ���ж��Ƿ�ɹ�
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
int n;
int a[100005];
void solve()
{
	cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<0){
            sum++;
            a[i]=(-a[i]);
        }
    }
    for(int i=1;i<=sum;i++){
        a[i]=(-a[i]);
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i+1]){
            puts("NO");
            return;
        }
    }
    puts("YES");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}