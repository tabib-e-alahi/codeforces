#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a, b;
        cin >> a;
        cin >> b;
        bool isPossible = false;

        int odd_one_a = 0, evn_one_a = 0;
        int odd_zero_b = 0, evn_zero_b = 0;

        for (int i = 1; i < n + 1; i++)
        {
            //odd
            if (i % 2 != 0)
            {
                if (a[i - 1] == '1')
                    odd_one_a++;
                if (b[i - 1] == '0')
                    odd_zero_b++;
            }

            //even
            else
            {
                if (a[i - 1] == '1')
                    evn_one_a++;
                if (b[i - 1] == '0')
                    evn_zero_b++;
            }
        }

        if (odd_one_a <= evn_zero_b && odd_zero_b >= evn_one_a)
        {
            isPossible = true;
        }


        if (isPossible)
            cout << "YES\n";
        else
            cout << "NO\n";

    }

    return 0;
}