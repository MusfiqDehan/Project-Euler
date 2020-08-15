#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a, b, c, sum=1000;

    for(a=1; a<=sum; a++)
    {
        for(b=a+1; b<=sum; b++) 
        {
            c = sum - a - b;
            
            if(a*a + b*b == c*c)
            {
                cout << "a = " << a << endl
                     << "b = " << b << endl
                     << "c = " << c << endl
                     << "a x b x c = " << a * b * c << endl
                     << "(a x a) + (b x b) = " << (a * a) + (b * b) << endl
                     << "(c x c) = " << c * c << endl;
            }

        }
    }

    return 0;
}