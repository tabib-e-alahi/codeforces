#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        if (n > m || (n % 2 == 0 && ((m - (n - 2)) % 2 != 0 || (m - (n - 2)) / 2 < 1)))
        {
            cout << "NO\n";
        }
        else if (n == 1)
        {
            cout << "YES\n" << m << "\n";
        }
        else
        {
            vector < int > ans;

            if (n % 2 != 0) {
                for (int i = 1; i <= n - 1; i++)
                {
                    ans.push_back(1);
                }
                ans.push_back(m - (n - 1));
            }

            else {
                for (int i = 1; i <= n - 2; i++)
                {
                    ans.push_back(1);
                }
                int rem = (m - (n - 2)) / 2;
                ans.push_back(rem);
                ans.push_back(rem);
            }

            cout << "YES\n";
            for (int x: ans)
                cout << x << " ";
            cout << "\n";
        }
    }

    return 0;
}