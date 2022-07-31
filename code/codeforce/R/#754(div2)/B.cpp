#include<bits/stdc++.h>
#define N 1000006
using namespace std;
char ch[N];
void solve()
{
	vector<int>vec;
	string s;
	int n,c0=0,c1=0;
	cin>>n>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='0')c0++;
		else c1++;
	}
	for(int i=0;i<c0;i++){
		if(s[i]=='1')vec.push_back(i+1);
	}
	if(vec.size()==0){
		cout<<0<<endl;
		return;
	}
	for(int i=c0;i<n;i++){
		if(s[i]=='0')vec.push_back(i+1);
	}
	cout<<1<<endl<<vec.size()<<" ";
	for(auto it:vec){
		cout<<it<<" ";
	}
	puts("");
} 
int main()
{
	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}
//完全不理解，操作是检查字符串和应该的最终结果哪里有差别，就存位置，鬼知道为什么