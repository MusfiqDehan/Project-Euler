#include <bits/stdc++.h>
using namespace std;

typedef unsigned int ui;
const ui maxDivisors = 1000;

int main () 
{
    vector<ui> smallest;
    smallest.push_back(0);

    ui index = 0;
    ui triangle = 0;

    while (smallest.size() < maxDivisors)
    {
        index++;
        triangle += index;

        if (smallest.size() > 300 && triangle % 10 != 0)
        {
            continue;
        }
        
        ui divisors = 0;
        ui i = 1;

        while (i * i < triangle)
        {
            if (triangle % i == 0) {
                divisors += 2;
            }
            i++;
        }

        if (i * i == triangle) {
            divisors++;
        }

        while (smallest.size() <= divisors)
        {
            smallest.push_back(triangle);
        }        
        
    }

    ui test;
    cin >> test;

    while (test--) {
        ui minDivisors;
        cin >> minDivisors;

        cout << smallest[minDivisors + 1] << endl;
    }

    return 0;

}