#include<bits/stdc++.h>
using namespace std;

int sum_of_digits(int num)
{
    int sum = 0;
     while (num > 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int main()
{
    int t, n, i;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> n; // 625326
        int n1 = n / 1000; // 625
        n = n % 1000; // 326
        if(sum_of_digits(n) == sum_of_digits(n1))\
        {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
