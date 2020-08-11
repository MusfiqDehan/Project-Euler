#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define el "\n"

int main()
{
    ll n = 100;

    ll sumOfNaturalNumbers = (n*(n+1))/2;
    cout << "Sum Of Natural Numbers = " << sumOfNaturalNumbers << el;

    ll squareOfSumOfNaturalNumbers = (sumOfNaturalNumbers) * (sumOfNaturalNumbers);
    cout << "Square Of Sum Of Natural Numbers = " << squareOfSumOfNaturalNumbers << el;

    ll sumOfSquaredNaturalNumbers = (n * (n + 1) * ((2 * n) + 1)) / 6;
    cout << "Sum Of Squared Natural Numbers = " << sumOfSquaredNaturalNumbers << el;

    ll differenceOfSquareAndSum = squareOfSumOfNaturalNumbers - sumOfSquaredNaturalNumbers;
    cout << "Difference Of Square and Sum = " << differenceOfSquareAndSum << el;

    return 0;
}