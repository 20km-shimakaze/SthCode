#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
string s;
int num[N][4];//0r  1e  2d 3?
void solve()
{
	cin>>s;
    int fl=0;
    int len=s.size()/3;
    int n=s.size();
    int a=0,b=0,c=0,d=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='r')a++;
        if(s[i]=='e')b++;
        if(s[i]=='d')c++;
        if(s[i]=='?')d++;
        num[i][0]=a;
        num[i][1]=b;
        num[i][2]=c;
        num[i][3]=d;
    }
    if(a>len||b>len||c>len){
        cout<<"No"<<endl;
        return;
    }
    a=b=c=d=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='e'){//ƥ��ed/e?
            if(num[i][2]-c>0){//����ƥ��ed
                c++;
                continue;
            }
            if(num[i][3]-d>0){//���ƥ��e?
                d++;
                continue;
            }
            fl=1;
        }
        if(s[i]=='r'){//ƥ��re/e?
            if(num[i][1]-b>0){//����ǰ�����e�Ѿ��жϹ�e�����Ƿ���d
                b++;
                continue;
            }
            if(num[i][3]-d>0&&num[i][2]-c>0){//��d���ڣ���һ������e��ƥ��
                d++,c++;
                continue;
            }
            if(num[i][3]-d>1){//û��ed����������
                d+=2;
                continue;
            }
            fl=1;
        }
    }
    if(fl)cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}