#include <bits/stdc++.h>
using namespace std;

const int n = 1000007;
bool isPrime[n];

void sieve(vector<int>&primes)
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

    for(int p=2; p<n; p++)
    {
        if(isPrime[p])
        {
            primes.push_back(p);
        }
    }
}

int main() {    
    vector<int>primes;
    sieve(primes);

    int nth;
    cin >> nth;

    printf("%d st prime number is = %d\n", nth, primes[nth-1]);
    
    return 0;
}