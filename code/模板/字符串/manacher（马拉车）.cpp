#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string t,s;
int p[31000007];//开范围两倍
void init()//预处理,把奇偶统一起来
{
    s+='$';//防溢出
    s+='#';
    for(int i=0;i<t.size();i++){
        s+=t[i];
        s+='#';
    }
}
int manachar(int len)
{
    int mx=0,id=0,sum=0;
    p[0]=0;
    for(int i=1;i<len;i++){
        if(i<mx)p[i]=min(mx-i,p[2*id-i]);//p[j]不在mx对称位置上
        else p[i]=1;
        while(s[i+p[i]]==s[i-p[i]])p[i]++;//p[j]在mx对称上，尝试扩展
        if(i+p[i]>mx)mx=p[i]+i,id=i;//更新最右边界和对称点
        sum=max(sum,p[i]);
    }
    return sum-1;
}
void solve()
{
    cin>>t;
    init();
    cout<<manachar(s.size())<<endl;
}
signed main()
{
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}