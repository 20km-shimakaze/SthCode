#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
int n;
string s;
vector<int>v[30];
void solve()
{
	cin>>n>>s;
    for(int i=0;i<s.size();i++){
        v[s[i]-'a'].push_back(i);//��¼ÿһ����ĸ��λ�ã��ں���С����
    }
    int di=0,l=0,r=n-1;
    for(int i=0;i<n;i++){//����ƥ��
        int u=-1;
        for(int j=0;j<s[i]-'a'&&u==-1;j++){//����ƥ���С���ַ�
            while(v[j].size()&&v[j].back()>r)v[j].pop_back();//������ƥ���Ӧ���Ǳ��±��С��
            if(v[j].size()&&v[j].back()>i)u=v[j].back(),v[j].pop_back();//����ƥ����ƥ��
        }
        if(u!=-1){
            r=u;
            swap(s[i],s[r]);
        }
    }
    cout<<s<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}
/*
cabaaabbbabcbaba
* *   *  *   * *
aaaaaaabbbbbbbcc
aaaaaaabbbbcbbbc
*/