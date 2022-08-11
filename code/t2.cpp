#include <bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0);cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int,int> P;
const int N=2e5+7;
const int mod=998244353;
string p[6],stra[2],strb[2];
int f(char ch)
{
	if(ch=='K')return 13;
	if(ch=='Q')return 12;
	if(ch=='J')return 11;
	if(ch=='T')return 10;
	if(ch=='A')return 1;
	return ch-'0';
}
bool T10(vector<string>&y)
{
	if(y[0][1]==y[1][1]&&y[0][1]==y[2][1]&&y[0][1]==y[3][1]&&
		y[0][1]==y[4][1]&&y[0][0]=='A'&&y[1][0]=='T'&&y[2][0]=='J'&&
		y[3][0]=='Q'&&y[4][0]=='K')return 1;
		return 0;
}
bool T9(vector<string>&y)
{
	if(y[0][1]==y[1][1]&&y[0][1]==y[2][1]&&y[0][1]==y[3][1]&&
		y[0][1]==y[4][1]&&f(y[1][0])-f(y[0][0])==1&&f(y[2][0])-f(y[1][0])==1&&
		f(y[3][0])-f(y[2][0])==1&&f(y[4][0])-f(y[3][0])==1)return 1;
	return 0;
}
bool T8(vector<string>&y)
{
	int a=1,b=1;
	for(int i=1;i<=3;i++)
		if(y[i][0]==y[0][0])a++;
		else if(y[i][0]==y[4][0])b++;
	if(a==4||b==4)return 1;
	return 0;
}
bool T7(vector<string>&y)//manwu
{
	int a=1,b=1;
	for(int i=1;i<=3;i++)
		if(y[i][0]==y[0][0])a++;
		else if(y[i][0]==y[4][0])b++;
	if((a==2&&b==3)||(a==3&&b==2))return 1;
	return 0;
}
bool T6(vector<string>&y)//tonghua
{
	int a=1;
	for(int i=1;i<=4;i++)
		if(y[i][1]==y[0][1])
			a++;
	if(a==5)return 1;
	return 0;
}
bool T5(vector<string>&y)//shunzi
{
	int fl=1;
	for(int i=1;i<=4;i++)
		if(f(y[i][0])-f(y[i-1][0])!=1){
			fl=0;
			break;
		}
	if(fl==1)return 1;
	return 0;
}
bool T4(vector<string>&y)//sanzhang
{
	int a=0,b=0,c=0;
	for(int i=0;i<=4;i++)
	{
		if(y[i][0]==y[0][0])a++;
		if(y[i][0]==y[1][0])b++;
		if(y[i][0]==y[4][0])c++;
	}
	if(a>=3||b>=3||c>=3)return 1;
	return 0;
}
bool T3(vector<string>&y)//linagdui
{
	if(y[0][0]==y[1][0]&&y[3][0]==y[2][0])return 1;
	if(y[0][0]==y[1][0]&&y[4][0]==y[3][0])return 1;
	if(y[1][0]==y[2][0]&&y[3][0]==y[4][0])return 1;
	return 0;
}
bool T2(vector<string>&y)//dui
{
	int fl=0;
	for(int i=1;i<=4;i++)
		if(f(y[i][0])-f(y[i-1][0])==0){
			fl=1;
			break;
		}
	if(fl==1)return 1;
	return 0;
}
int check(int a,int b)
{
	int ta=1,tb=1;
	vector<string>x,y;
	x.push_back(stra[0]),x.push_back(stra[1]);
	y.push_back(strb[0]),y.push_back(strb[1]);
	// for(int i=1,j=0;j<=5;i<<=1,j++)
	// {
	// 	if(a&i)x.push_back(p[j]);
	// 	else if(b&i)y.push_back(p[j]);
	// }
	for(int i=0;i<6;i++){
        if(a&(1<<i))x.push_back(p[i]);
        if(b&(1<<i))y.push_back(p[i]);
    }

	//cout<<"Yes"<<endl;
	sort(x.begin(),x.end(),[&](string a,string b){
		return f(a[0])<f(b[0]);
	});
	sort(y.begin(),y.end(),[&](string a,string b){
		return f(a[0])<f(b[0]);
	});
	// cout<<x.size()<<" "<<y.size()<<endl;
	// for(auto i:x)
	// 	cout<<i<<" ";cout<<endl;
	// for(auto i:y)
	// 	cout<<i<<" ";cout<<endl;


	if(T10(x))ta=10;
	else if(T9(x))ta=9;
	else if(T8(x))ta=8;
	else if(T7(x))ta=7;
	else if(T6(x))ta=6;
	else if(T5(x))ta=5;
	else if(T4(x))ta=4;
	else if(T3(x))ta=3;
	else if(T2(x))ta=2;
	
	if(T10(y))tb=10;
	else if(T9(y))tb=9;
	else if(T8(y))tb=8;
	else if(T7(y))tb=7;
	else if(T6(y))tb=6;
	else if(T5(y))tb=5;
	else if(T4(y))tb=4;
	else if(T3(y))tb=3;
	else if(T2(y))tb=2;

	if(ta>tb)return 1;
	else if(ta<tb)return -1;

	for(int i=0;i<=4;i++)
	{
		if(f(x[i][0])>f(y[i][0]))return 1;
		else if(f(x[i][0])<f(y[i][0]))return -1;
	}

	return 0;
}
int dfs(int a,int b,int p,int fl,int num)
{
    if(num==7){
        return check(a,b);
    }
    int ff=0;
    for(int i=0;i<6;i++){
        if(p&(1<<i)){
            if(fl)a|=(1<<i);
            else b|=(1<<i);
            int t=dfs(a,b,p^(1<<i),fl^1,num+1);
            if(fl)a^=(1<<i);
            else b^=(1<<i);
            if(t==-1)return 1;
            if(t==0)ff=1;
        }
    }
    return ff?0:-1;
}
void solve()
{
    cin>>stra[0]>>stra[1];
    cin>>strb[0]>>strb[1];
    for(int i=0;i<6;i++)cin>>p[i];
    int an=dfs(0,0,(1<<7)-1,1,1);
    if(an==0)cout<<"Draw"<<endl;
    else if(an==1)cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;
}
signed main()
{
	//IOS
	int __=1;
	cin >> __;
	while (__--)
		solve();
}