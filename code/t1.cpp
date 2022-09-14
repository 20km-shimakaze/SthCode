#include <cstdio>
#include <set>
using namespace std;

int main()
{
	multiset<long long> s;
	int q;
	scanf("%d", &q);
	while(q--)
	{
		int op;
		long long x;
		scanf("%d%lld", &op, &x);
		if(op == 1) s.insert(x);
		else
		{
			int k;
			scanf("%d", &k);
			if(op == 2)
			{
				bool bad = false;
				auto it = s.upper_bound(x);
				for(; k--; --it)
					if(it == s.begin())
					{
						bad = true;
						break;
					}
				if(bad) puts("-1");
				else printf("%lld\n", *it);
			}
			else
			{
				auto it = s.lower_bound(x);
				for(; --k; ++it)
					if(it == s.end())
						break;
				if(it == s.end()) puts("-1");
				else printf("%lld\n", *it);
			}
		}
	}
	return 0;
}
