#include <bits/stdc++.h>
#define LEN 6
using namespace std;

vector<vector<int>> dir {
    {1,0},
    {0,1},
    {1,1},
    {-1,1}
};

int n;
vector<string> s;

bool f(int x,int y,int dx,int dy){
    int c = 0;
    for(int i = 0; i < LEN; i++){
        if(!(0 <= min(x,y) && max(x,y) < n)) return false;

        if(s[x][y] == '#') c++;
        x += dx;
        y += dy;
    }
    return c >= 4;
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++){
        string str;
        cin >> str;
        s.push_back(str);
    }
    for(int x = 0; x < n; x++){
        for(int y = 0; y < n; y++){
            for(auto d : dir){
                if(f(x,y,d[0],d[1])){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
