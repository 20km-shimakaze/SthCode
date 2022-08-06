#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
	ios::sync_with_stdio(0); \
	cout.tie(0);
#define int long long
typedef long long ll;
typedef pair<int, int> P;
char s[510][510];
int f[2][510][510], g[510][510], n, m;

int dfs1(int x, int y, int fl)
{
	if (x > n || y > m)
		return -1;

	if (s[x][y] != '.')
	{
		if (s[x][y] == 'A')
			return 1;
		else
			return 0;
	}
	if (x == n && y == m)
		return 0;

	int &res = f[fl][x][y];
	if (res != -1)
		return res;

	int nxt1 = dfs1(x + 1, y, fl ^ 1), nxt2 = dfs1(x, y + 1, 1 - fl);
	if (nxt1 == -1 || nxt2 == -1)
	{
		if (nxt1 == -1)
			return res = nxt2;
		else
			return res = nxt1;
		return res;
	}
	if (!fl)
		return res = nxt1 | nxt2;
	else
		return res = nxt1 & nxt2;
	return -1;
}

int dfs2(int x, int y, int fl)
{
	if (x > n || y > m)
		return -1;

	if (s[x][y] != '.')
	{
		if (s[x][y] == 'A')
			return 0;
		else
			return 0;
	}
	if (x == n && y == m)
		return 1;
	int &res = f[fl][x][y];
	if (res != -1)
		return res;

	int nxt1 = dfs2(x + 1, y, fl ^ 1), nxt2 = dfs2(x, y + 1, 1 - fl);
	if (nxt1 == -1 || nxt2 == -1)
	{
		if (nxt1 == -1)
			return res = nxt2;
		else
			return res = nxt1;
		return res;
	}
	if (!fl)
		return res = nxt1 | nxt2;
	else
		return res = nxt1 & nxt2;
	return -1;
}

int dfs3(int x, int y, int fl)
{
	if (x > n || y > m)
		return -1;

	if (s[x][y] != '.')
	{
		if (s[x][y] == 'A')
			return 0;
		else
			return 1;
	}
	int &res = f[fl][x][y];
	if (x == n && y == m)
		return 0;
	if (res != -1)
		return res;

	int nxt1 = dfs3(x + 1, y, fl ^ 1), nxt2 = dfs3(x, y + 1, fl ^ 1);
	if (nxt1 == -1 || nxt2 == -1)
	{
		if (nxt1 == -1)
			return res = nxt2;
		else
			return res = nxt1;
		return res;
	}
	if (!fl)
		return res = nxt1 | nxt2;
	else
		return res = nxt1 & nxt2;
	return -1;
}

void solve()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> s[i][j];
		}
	}
	memset(f, -1, sizeof(f));
	if (dfs1(1, 1, 0))
		cout << "yes ";
	else
		cout << "no ";
	memset(f, -1, sizeof(f));
	if (dfs2(1, 1, 0))
		cout << "yes ";
	else
		cout << "no ";
	memset(f, -1, sizeof(f));
	if (dfs3(1, 1, 0))
		cout << "yes " << endl;
	else
		cout << "no " << endl;
}

signed main()
{
	int T;
	cin >> T;
	while (T--)
		solve();
	return 0;
}