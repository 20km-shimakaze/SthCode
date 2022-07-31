#include<iostream>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
void slove()
{
	string s;
    cin>>s;
    int i=0;
    int flag=0;
    int t1=0,t2=0;
    int tt=-1;
    int oi;
    for(int i=0;i<s.size();i++){
        if(s[i]=='o'){
            t1++;
            if(t1>1){
                cout<<"No"<<endl;
                return;
            }
            t2=0;
        }
        if(s[i]=='x'){
            t2++;
            if(t2>2){
                cout<<"No"<<endl;
                return;
            }
            t1=0;
        }
        if(tt==-1&&s[i]=='o')tt=i;
        else if(tt&&s[i]=='o'){
            if(i-tt!=3){
                cout<<"No"<<endl;
                return;
            }
            tt=i;
        }
    }
    cout<<"Yes"<<endl;
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