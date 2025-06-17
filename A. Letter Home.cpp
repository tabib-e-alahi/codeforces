#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = v[0];
        int r = v[n - 1];

        int p1 = abs(s - l) + (r - l);
        int p2 = abs(s - r) + (r - l);

        cout << min(p1, p2) << "\n";
    }

    return 0;
}