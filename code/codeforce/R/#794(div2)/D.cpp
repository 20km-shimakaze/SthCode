#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int a,b,c,d,aa,bb,cc,dd;
int check1(string s)
{
    for(int i=0;i<s.size();i++){
        if(i<s.size()-1&&s[i]=='A'&&s[i+1]=='B'&&c>0){
            c--;
            i++;
        }
        else if(i<s.size()-1&&s[i]=='B'&&s[i+1]=='A'&&d>0){
            d--;
            i++;
        }
        else if(s[i]=='A'&&a>0){
            a--;
        }
        else if(s[i]=='B'&&b>0){
            b--;
        }
        else {
            cout<<i<<endl;
            return 0;
        }
    }
    return 1;
}
int check2(string s)
{
    for(int i=0;i<s.size();i++){
        if(i<s.size()-1&&s[i]=='B'&&s[i+1]=='A'&&d>0){
            d--;
            i++;
        }
        else if(i<s.size()-1&&s[i]=='A'&&s[i+1]=='B'&&c>0){
            c--;
            i++;
        }
        else if(s[i]=='A'&&a>0){
            a--;
        }
        else if(s[i]=='B'&&b>0){
            b--;
        }
        else {
            cout<<i<<endl;
            return 0;
        }
    }
    return 1;
}
void solve()
{
	cin>>a>>b>>c>>d;
    aa=a,bb=b,cc=c,dd=d;
    string s;
    cin>>s;
    int f1=0,f2=0;
    f1=check1(s);
    //reverse(s.begin(),s.end());
    //cout<<s<<endl;
    a=aa,b=bb,c=cc,d=dd;
    f2=check2(s);
    //cout<<f1<<" "<<f2<<endl;
    if(f1||f2)puts("YES");
    else puts("NO");
}
signed main()
{
	int __;
	cin >> __;
	//__=1;
	while (__--)
		solve();
}