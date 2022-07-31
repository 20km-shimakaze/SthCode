/*
https://acm.hdu.edu.cn/contests/contest_showproblem.php?pid=1012&cid=1044
通过观察可以发现，只用单独的一种数字，想达成胜利分别是0（1个）1（2个），2（4个），3（8个）
进而研究发现一个1等价于2个2，一个2等价于两个3以此类推。
这样的话我们只需要直接从后往前遍历一遍，检查0是否存在即可
必胜策略：Alice每次分的时候把权值，分成两堆即可
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