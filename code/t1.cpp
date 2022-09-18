#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n, q;
	cin >> n >> q;
	vector<vector<int>>graph(n + 1);
	int u, v;
	for (int i = 1; i <= q; ++i) {
		cin >> u >> v;
		graph[u - 1].push_back(v);
		graph[v].push_back(u - 1);
	}
	vector<bool>vis(n + 1, false);
	auto dfs = [&](auto dfs, int u) {
		if (vis[u]) return;
		vis[u] = true;
		for (auto v : graph[u]) dfs(dfs, v);
		return;
	};
	dfs(dfs, 0);
	if (vis[n]) cout << "Yes" << '\n';
	else cout << "No" << '\n';
	return;
}
