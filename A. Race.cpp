#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, x, y;
        cin >> a >> x >> y;

        bool canChoose = false;

        int a_x = abs(a - x);
        int a_y = abs(a - y);
        for (int i = 1; i <= 100; i++)
        {
            if (i == a)
            {
                continue;
            }

            int b_x = abs(i - x);
            int b_y = abs(i - y);

            if (b_x < a_x && b_y < a_y)
            {
                canChoose = true;
            }
        }


        if (canChoose)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    
    return 0;
}