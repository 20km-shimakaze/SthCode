#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int maxn=1e6;
vector<int>v[maxn];
int dfn[maxn],low[maxn],tot;
int stc[maxn],vis[maxn],top;
int col[maxn],cnt;
int in[maxn];
int w[maxn];
int n,m;
vector<int>p[maxn];
void tarjan(int x)
{
	dfn[x]=low[x]=++tot;
	stc[++top]=x;//��ջ
	vis[x]=1;//�����ջ

	for(int i=0;i<v[x].size();i++)
	{
		int y=v[x][i];
		if(!dfn[y])//��û�б�����
		{
			tarjan(y);
			low[x]=min(low[x],low[y]);
			//��Ϊy��ȱ�x��
			// ���Ժ�low�Ƚ�
		}
		else if(vis[y]){//�Ѿ���ջ
			//yΪ���ݸ��׽ڵ� ���Ժ�dfn�Ƚ�
			low[x]=min(low[x],dfn[y]);
		}
	}
	//ͬһ����ͨ����low��ͬ
	// �ҵ�һ����ͨ����
	int y;
	if(dfn[x]==low[x])
	{
		//��������++
		cnt++;
		do{
			y=stc[top--];
			p[cnt].push_back(y);
			col[y]=cnt;
			//Ϳɫ�������ͬ����
			vis[y]=0;
			w[cnt]=min(w[cnt],y);
		}while(x!=y);//ֻҪ�Լ���û�е������ջ����Ϊͬһ������
	}
}
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)w[i]=maxn;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++)
		if(!dfn[i])
			tarjan(i);

	for(int x=1;x<=n;x++){
		for(auto y:v[x]){
			if(col[x]!=col[y])in[col[y]]++;
		}
	}
	vector<int>q;
	for(int i=1;i<=cnt;i++)
		if(!in[i])
			q.push_back(w[i]);
	cout<<q.size()<<endl;
	for(int i=0;i<q.size();i++)
		cout<<q[i]<<" ";
}