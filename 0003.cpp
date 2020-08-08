#include <bits/stdc++.h>
using namespace std;

long long p = 600851475143;

void primeFactors(long long n) 
{
    for (long long i = 2; i<=sqrt(n); i++) //0 and 1 are not prime
    {
        //cout << "i = " << i << "," << " n = " << n << endl; //For debugging

        while (n % i == 0) {
            n = n / i;
            cout << "Factor = " << i << endl; //Prime factors
        }
    } 

    if(n > 1) 
    {
        cout << "Last factor = " << n << endl; //Largest prime factor
    }   
}

int main()
{
    long long n;
    cout << "Enter a number : ";
    cin >> n;
    cout << endl;

    primeFactors(n);

    return 0;
}