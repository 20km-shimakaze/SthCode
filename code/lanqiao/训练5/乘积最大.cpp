#include <iostream>
#include <cmath>
using namespace std;
int n, k, maxx, mul, i, a[100];
void dfs(int x, int ans, int last)
{
    if (x == k)
    {
        mul = 0;
        for (int j = last + 1; j < n; j++)
        {
            mul += a[j];
            mul *= 10;
        }
        mul += a[n];
        maxx = max(maxx, ans * mul);
        return;
    }
    for (int i = last + 1; i <= n - k + x; i++)
    {
        mul = 0;
        for (int j = last + 1; j < i; j++)
        {
            mul += a[j];
            mul *= 10;
        }
        mul += a[i];
        dfs(x + 1, ans * mul, i);
    }
}
int main()
{
    cin >> n >> k;
    char ch;
    for (i = 1; i <= n; i++)
    {
        cin >> ch;
        a[i] = ch - '0';
    }
    dfs(0, 1, 0);
    cout << maxx;
}