#include<iostream>
#include<cstdio>
#include<set>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    set<vector<int>>se;
    while(t--){
        int n;
        cin>>n;
        vector<int>s;
        while(n--){
            int x;
            cin>>x;
            s.push_back(x);
        }
        se.insert(s);
    }
    cout<<se.size()<<endl;
    return 0;
}