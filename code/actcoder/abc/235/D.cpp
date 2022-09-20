#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

const int maxn = 1e6 + 5;
const ll mod = 1e9 + 7;

int v[maxn];
queue<ll> qu;

int f(int x){
	if(x < 10 || x % 10 == 0) return 1e8;
	int y = x / 10;
	int len = log10(x);
	x = x % 10;
	int num = y + x * pow(10, len);
	return num;
}

int main(){
	
	memset(v, -1, sizeof(v));
	
	ll a, N;
	cin >> a >> N;
	
	v[1] = 0;
	qu.push(1);
	while(!qu.empty()){
		ll now = qu.front(); qu.pop();
		if(now == N) break; // 注意第一次搜到就 break
		if(now * a < 1e6 && v[now * a] == -1){ // 没被搜到，并且超过最大范围
			v[now * a] = v[now] + 1;
			qu.push(now * a);
		}
		int tmp = f(now);
		if(tmp < 1e6 && v[tmp] == -1){ // 没被搜到，并且超过最大范围
			v[tmp] = v[now] + 1;
			qu.push(tmp);
		}
	}
	
	cout << v[N] << endl;
				
	return 0;
}
