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
        int m = n * (n - 1) / 2;
        vector < int > v(m);

        for (int i = 0; i < m; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        vector < int > a;
        int idx = 0;

        for (int i = n - 1; i >= 1; i--)
        {
            a.push_back(v[idx]);
            idx += i;
        }

        a.push_back(1e9);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}