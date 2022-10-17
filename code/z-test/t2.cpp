#include<bits/stdc++.h>
using namespace std;
const int maxn=1e6+7;
const int mod=1e9+7;
int a,b,k;
int bbegin;
bool flag;
vector<int> v;
void dfs(int now)
{
	if(flag)
		return;
	if(now==b)
	{
		printf("< %d > ",bbegin);
		for(auto i:v)
			printf("%d ",i);
		printf("\n");
		
		k--;
		if(k==0)
			flag=1;
		return;
	}
	if(flag)
		return;
	if(now+1<=b)
	{
		v.push_back(now+1);
		dfs(now+1);
		v.pop_back();
	}
	if(flag)
		return;
	if(now+2<=b)
	{
		v.push_back(now+2);
		dfs(now+2);
		v.pop_back();
	}
}
int ans[maxn];
signed main()
{
	scanf("%d%d%d",&a,&b,&k);
	
	ans[0]=ans[1]=1;
	for(int i=2;i<=b-a;i++)
		ans[i]=(ans[i-1]+ans[i-2])%(1000000007);
	
	printf("%d\n",ans[b-a]);
	
	for(int i=a;i<=b;i++)
		printf("%d ",i);
	printf("\n");
	
	k--;
	bbegin=b-2;
	while(k>0&&!flag&&bbegin>=a)
	{
		v.push_back(bbegin+2);
		dfs(bbegin+2);
		v.pop_back();

		bbegin--;
	}
	return 0;
}