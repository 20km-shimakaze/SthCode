/*
https://acm.hdu.edu.cn/contests/contest_showproblem.php?pid=1012&cid=1044
ͨ���۲���Է��֣�ֻ�õ�����һ�����֣�����ʤ���ֱ���0��1����1��2������2��4������3��8����
�����о�����һ��1�ȼ���2��2��һ��2�ȼ�������3�Դ����ơ�
�����Ļ�����ֻ��Ҫֱ�ӴӺ���ǰ����һ�飬���0�Ƿ���ڼ���
��ʤ���ԣ�Aliceÿ�ηֵ�ʱ���Ȩֵ���ֳ����Ѽ���
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
int su[1000];
int a[1000006];
int n;
void solve()
{
    cin>>n;
    for(int i=0;i<=n;i++)cin>>a[i];
    for(int i=n;i>=1;i--){
        a[i-1]+=a[i]/2;
    }
    if(a[0])puts("Alice");
    else puts("Bob");
}
signed main()
{
    int __=1;
    cin >> __;
    while (__--)
        solve();
}