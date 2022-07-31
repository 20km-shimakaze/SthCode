#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3;
string ans,s1,s2;
string more(char a)
{
	string s;
	if(p1==1){
		if(a>=65&&a<=90)a+=32;
	}
	else if(p1==2){
		if(a>=97&&a<=122)a-=32;
	}
	else{
		a='*';
	}
	for(int i=1;i<=p2;i++)s+=a;
	return s;
}
string adds(char l,char r)
{
	string s;
	for(l++;l<r;l++){
		s+=more(l);
	}
	string ss;
	if(p3==2){
		for(int i=s.size()-1;i>=0;i--)ss+=s[i];
		return ss;
	}
	else return s;
}
int main()
{
    cin>>p1>>p2>>p3;
    cin>>ans;
    for(int i=0;i<ans.size();i++){
        if(ans[i]=='-'){
			char a1=ans[i-1],a2=ans[i+1];
			//cout<<a1<<" "<<a2<<endl;
            if(a1<a2&&((a1>=97&&a2<=122)||(a1>=65&&a2<=90)||(a1>=48&&a2<=57))){
                ans.erase(i,1);//del -
				ans.insert(i,adds(ans[i-1],ans[i]));
            }
        }
    }
	cout<<ans<<endl;
}