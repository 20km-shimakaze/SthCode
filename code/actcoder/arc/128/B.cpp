#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<cmath>
#include<map>
#include<algorithm>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f
void slove()
{
	int s[4];
	cin>>s[1]>>s[2]>>s[3];
	sort(s+1,s+4);
	for(int i=1;i<=3;i++){
		for(int j=i+1;j<=3;j++){
			int t=abs(s[i]-s[j]);
			if(t%3==0){
				cout<<max(s[i],s[j])<<endl;
				return;
			}
		}
	}
	cout<<-1<<endl;
}
int main()
{
	int _t;
	cin>>_t;
	while(_t--){
		slove();
	}
}