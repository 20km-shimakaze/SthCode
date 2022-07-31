#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long
#define int long long
#define INF 0x3f3f3f3f3f3f3f3f
string s;
int n;
void slove()
{
	cin>>s>>n;
    int ans=-1;
    int l=0,len=0;
    for(int r=0;r<s.length();r++){
        if(s[r]=='.'){
            while(n==0&&l<r){
                if(s[l]=='.'){
                n++;
            }
            len--;
            l++;
            }
            if(n>0){
                len++;
                n--;
            }
            else{
                len=0;
                l++;
            }
        }
        else{
            len++;
        }
        ans=max(ans,len);
    }
    cout<<ans<<endl;
}
signed main()
{
	int __;
	//cin>>__;
	__=1;
	while(__--){
		slove();
	}
	return 0;
}
//滑窗，求一段区间有小于k个.的最大区间长度