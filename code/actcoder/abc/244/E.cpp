#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int INF=0x3f3f3f3f;
const int mod=998244353;
vector<int>v[N];
int n,m,k,s,t,x;
int f[2003][2003][2];//����Ϊi��·�������s�յ���j���ڵ�x�����г��ִ���
void solve()
{
	cin>>n>>m>>k>>s>>t>>x;
	for(int i=1;i<=m;i++){
		int aa,bb;
		cin>>aa>>bb;
		v[aa].push_back(bb);
		v[bb].push_back(aa);
	}
	f[0][s][s==x]=1;//��㵽��������ķ�����
	for(int i=0;i<k;i++){//����·�����ȿ���Ϊ1-k
		for(int u=1;u<=n;u++){//����ÿһ���յ�Ĵ�
			for(int num=0;num<=1;num++){//x���ܳ�����ż��/������
				if(!f[i][u][num])continue;//���˽ڵ�����û�й���ֵ��˵������������Ȼ�û���ܵ�������·��
				for(int ne:v[u]){
					int ta=(num^(ne==x));//��������һ���ڵ����ż��
					f[i+1][ne][ta]=(f[i+1][ne][ta]+f[i][u][num])%mod;
				}
			}
		}
	}
	cout<<f[k][t][0]<<endl;
}
signed main()
{
	//IOS
	int __=1;
	//cin >> __;
	while (__--)
		solve();
}