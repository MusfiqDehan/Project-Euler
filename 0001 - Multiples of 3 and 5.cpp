#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
#define el "\n"

ull sum (ull n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ull n;
        cin >> n;

        n--;

        ull sum3 = 3 * sum(n / 3);
        ull sum5 = 5 * sum(n / 5);
        ull sum3x5 = 15 * sum(n / 15);

        ull res = (sum3 + sum5) - sum3x5;

        cout << res << el;
    }

    return 0;
}
