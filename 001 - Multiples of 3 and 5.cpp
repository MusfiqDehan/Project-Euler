//Appropiate for both Project Euler and Project Euler+ in HackerRank

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

//////////////////////////////////////////////////////////////////////////////////////////

//Only appropiate for Project Euler

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sum = 0; //I took sum initially as 0

    for (int i = 3; i <= 999; i++)
    {   //1,2 and 1000 will not included according to question
        // So, I am iterating from 3 to 999 using for loop
        if (i % 3 == 0 || i % 5 == 0)
        {                  //Here I am collecting the multiple of 3 or 5
            sum = sum + i; //Here all the i value is adding one by one with sum
        }
    }
    
    cout << sum << endl; //Here outside the loop, we will get the result

    return 0;
}

