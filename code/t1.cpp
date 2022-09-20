#include <bits/stdc++.h>
using namespace std;

inline int rd()
{
	int x = 0;
	bool f = 0;
	char c = getchar();
	for (; !isdigit(c); c = getchar())
		f |= (c == '-');
	for (; isdigit(c); c = getchar())
		x = x * 10 + (c ^ 48);
	return f ? -x : x;
}

#define N 2007
#define mod 998244353
#define add(a, b) (a) = ((a) + (b)) % mod

vector<int> e[N];

int f[N][N][2];

int main()
{
	int n = rd(), m = rd();
	int k = rd(), s = rd(), t = rd(), x = rd();
	for (int i = 1; i <= m; ++i)
	{
		int u = rd(), v = rd();
		e[u].push_back(v);
		e[v].push_back(u);
	}
	f[0][s][x == s] = 1;
	for (int i = 0; i < k; ++i)
		for (int u = 1; u <= n; ++u)
			for (int k = 0; k <= 1; ++k)
			{
				if (!f[i][u][k])
					continue;
				for (auto v : e[u])
				{
					int tar = (k ^ (v == x));
					add(f[i + 1][v][tar], f[i][u][k]);
				}
			}
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			cout<<f[i][j][0]<<" ";
		}
		cout<<endl;
	}
	printf("%d\n", f[k][t][0]);
	return 0;
}