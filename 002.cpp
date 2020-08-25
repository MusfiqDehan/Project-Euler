#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int first=0, second=1, fibo=0, sum=0; //Initializing variables

    while (fibo <= 4e6) //Loop will continue untill 4 Million
    {
        fibo = first + second; //Making fibonacci
        first = second; //Fist will be second
        second = fibo; //Second will be fibonacci which previously created

        if(fibo%2==0) //Taking only even fibonacci
            sum = sum + fibo; //Sum of even fibonacci
    }

    cout << sum << endl; //Printing the sum or result

    return 0;
}
