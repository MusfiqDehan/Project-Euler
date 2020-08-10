#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count=0, i, j;

    for (i = 1; i <= 1000000000; i++)//Deviding checking
    {
        for (j = 1; j <= 20; j++)
        {
            //cout << i << " % " << j << " = " << i%j << endl; //For debugging

            if (i % 1 == 0 && i % 2 == 0 && i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 6 == 0 && i % 7 == 0 && i % 8 == 0 && i % 9 == 0 && i % 10 == 0 && i % 11 == 0 && i % 12 == 0 && i % 13 == 0 && i % 14 == 0 && i % 15 == 0 && i % 16 == 0 && i % 17 == 0 && i % 18 == 0 && i % 19 == 0 && i % 20 == 0)
            {//Checking 1 to 20
                cout << i << endl;
            }
        }
    }

    return 0;
}