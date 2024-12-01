#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int odd_count = 0, even_count = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            (a[i] % 2 == 0) ? even_count++ : odd_count++;
        }

         if (n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        int res = abs(n / 2 - odd_count);
        cout << res << endl;
    }
    return 0;
}
