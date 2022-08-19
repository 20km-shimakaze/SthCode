#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s, t;
    cin >> s >> t;

    int k = (t[0] - s[0] + 26) % 26;
    string s2 = s;
    for (int i = 0; i < (int)s.size(); i++)
    {
        s2[i] = ((s2[i] - 'a') + k) % 26 + 'a';
    }
    if (s2 == t)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
