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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] > v[(i + 1) % n])
            {
                cnt++;
            }
        }

        cout << (cnt <= 1 ? "YES\n" : "NO\n");
    }

    return 0;
}