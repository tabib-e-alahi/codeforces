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

        vector < int > v(n);
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total ^= v[i];
        }

        if (n % 2 == 0)
        {
            if (total == 0) cout << 0 << "\n";
            else cout << -1 << "\n";
        }
        else cout << total << "\n";
    }

    return 0;
}