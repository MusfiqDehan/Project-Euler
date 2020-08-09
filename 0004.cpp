#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int temp = n;
    int sum = 0;

    while(temp!=0) {
        int r = temp % 10;
        sum = (sum * 10) + r;
        temp = temp / 10;
    }

    if(sum == n) return true;
    else return false;
}

int main()
{
    int product, bigPalin = -1;

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            product = i * j;
            //cout << i << " X " << j << " = " << product << endl;
            if(product>bigPalin) {
                if(isPalindrome(product)) {
                    bigPalin = product;
                }
            }
                
        }        
    }
    
    if(bigPalin != -1) cout << bigPalin << endl;

    return 0;
}