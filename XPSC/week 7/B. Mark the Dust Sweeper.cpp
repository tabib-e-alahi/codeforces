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
        vector < long long int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int ans = 0;
        bool isNot_Zero = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] != 0)
            {
                ans += v[i];
                isNot_Zero = true;
            }
            else if (isNot_Zero)
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}