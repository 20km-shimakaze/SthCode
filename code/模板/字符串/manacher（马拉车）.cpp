#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
string t,s;
int p[31000007];//����Χ����
void init()//Ԥ����,����żͳһ����
{
    s+='$';//�����
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
        if(i<mx)p[i]=min(mx-i,p[2*id-i]);//p[j]����mx�Գ�λ����
        else p[i]=1;
        while(s[i+p[i]]==s[i-p[i]])p[i]++;//p[j]��mx�Գ��ϣ�������չ
        if(i+p[i]>mx)mx=p[i]+i,id=i;//�������ұ߽�ͶԳƵ�
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