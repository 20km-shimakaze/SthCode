#include <cstdio>
#include <algorithm>
#include <map>

using namespace std;

const int N = 2e5 + 5;

int n, q;
int a[N], pre[N];
int zero[N], p[N];
int l, r;
map <int, int> las[2];

void solve()
{
	scanf("%d%d", &n, &q);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		pre[i] = pre[i - 1] ^ a[i];
		p[i] = las[i & 1 ^ 1][pre[i]];
		las[i & 1][pre[i]] = i;
		zero[i] = zero[i - 1] + (a[i] == 0);
	}
	while (q--)
	{
		scanf("%d%d", &l, &r);
		if (pre[r] != pre[l - 1])
		{
			printf("-1\n");
			continue;
		}
		if (zero[r] - zero[l - 1] == (r - l + 1))
		{
			printf("0\n");
			continue;
		}
		if ((r - l + 1) & 1)
		{
			printf("1\n");
			continue;
		}
		if ((a[l] == 0) || (a[r] == 0))
		{
			printf("1\n");
			continue;
		}
		if (p[r] > l - 1)
		{
			printf("2\n");
			continue;
		}
		printf("-1\n");
	}
}

int main()
{
	int T = 1;
	while (T--)
		solve();
	return 0;
}