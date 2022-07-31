#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
#define ll long long
#define INF 0x3f3f3f3f3f3f3f3f
void slove()
{
	string s;
    cin>>s;
    set<string>se;
    se.insert(s);
    sort(s.begin(),s.end());
    do
    {
        se.insert(s);
    } while (next_permutation(s.begin(),s.end()));
    cout<<se.size()<<endl;
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