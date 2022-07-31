#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=998244353 ;
const int N=1e6+7;
vector<int>v;
int s[100005],vis[20];
void solve()
{
    for(int n=18;n<=18;n++){
		int su=0,num=0;
		for(int j=1;j<=n;j++){
			if(su>=n){
				num+=n-j+1;
				break;
			}
			if(su%n!=j%n){
				int fl=0;
				while(1){
					su*=10;
					for(int k=0;k<=9;k++){
						int t=su+k;
						if(t%n==j%n){
							su+=k;
							fl=1;
							break;
						}
					}
					num++;cout<<j<<" "<<su<<endl;
					if(!fl)su+=0;
					else break;
				}
			}
		}
		cout<<"i="<<n<<" "<<num<<"     ";
	}
}
signed main()
{
    solve();
}