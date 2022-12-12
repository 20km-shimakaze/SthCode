#include<bits/stdc++.h> 
typedef long long ll;
using namespace std;
const int N = 2e5+10;
const int mod = 1e9+7;
ll a[N],b[N],c[N];
//string s1[N],s2[N],s3[N];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int res=0,res1=0;
		ll h;
		cin >> n >> h;
		ll hh = h;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		sort(a+1,a+n+1);
		int cc=1;
		for(int i=1;i<=n;i++){
			if(h>a[i]){
				res1++;
				h += a[i]/2;
			}
			else{
				if(cc==1){
					h*=2;
					i--;
					cc++;
				}
				else if(cc==2){
					h*=2;
					i--;
					cc++;
				}
				else if(cc==3){
					h*=3;
					i--;
					cc++;
				}
				else{
					break;
				}
			}
		}
		res = max(res,res1);
		cc=1;
		h = hh;
		res1=0;
		for(int i=1;i<=n;i++){
			if(h>a[i]){
				res1++;
				h += a[i]/2;
			}
			else{
				if(cc==1)
				{
					h*=2;
					i--;
					cc++;
				}
				else if(cc==2){
					h*=3;
					i--;
					cc++;
				}
				else if(cc==3)
				{
					h*=2;
					i--;
					cc++;
				}
				else{
					break;
				}
			}
		}
		res = max(res,res1);
		cc=1;
		h = hh;
		res1=0;
		for(int i=1;i<=n;i++){
			if(h>a[i]){
				res1++;
				h += a[i]/2;}
			else{
				if(cc==1){
					h*=3;
					i--;
					cc++;
				}
				else if(cc==2){
					h*=2;
					i--;
					cc++;
				}
				else if(cc==3){
					h*=2;
					i--;
					cc++;
				}
				else{
					break;
				}
			}
		}
		res = max(res,res1);
		cout << res << endl;
	} 
	return 0;
 } 