#include <bits/stdc++.h>
using namespace std;

const int n = 2000000;
long long sum = 0;
bool isPrime[n];

void sieve()
{
    for (int i = 0; i <= n; i++)
        isPrime[i] = true;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= n; i++)
    {
        if (isPrime[i] == true)
        {
            for (int multiple = i + i; multiple <= n; multiple = multiple + i)
            {
                isPrime[multiple] = false;
            }
        }
    }
    //return sum;
}

int main()
{
    sieve();

    for (int p = 2; p <= n; p++)
    {
        if (isPrime[p])
        {
            //cout << p << endl;
            sum = sum + p;
        }
    }
    cout << sum << endl;

    return 0;
}