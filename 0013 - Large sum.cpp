#include <bits/stdc++.h>
using namespace std;

//#define original
typedef unsigned int ui;

int main()
{
    const ui minDigits = 50 + 10;
    vector<ui> sum(minDigits, 0);

    ui n = 100;

#ifndef original
    cin >> n;
#endif

    while (n--)
    {
        string strAdd;
        cin >> strAdd;

        vector<ui> add;
        for (auto i = strAdd.rbegin(); i != strAdd.rend(); i++) 
        {
            add.push_back(*i - '0');
        }

        add.resize(sum.size(), 0);

        for (auto i = 0; i < add.size(); i++)
        {
            sum[i] += add[i];

            if (sum[i] >= 10)
            {
                sum[i + 1]++;
                sum[i] -= 10;
            }
            
        }
    }

    auto i = sum.rbegin();

    while (*i == 0)
    {
        i++;
    }

    ui numDigits = 10;

    while (numDigits-- > 0)
    {
        cout << *i++;
    }

    return 0;
}