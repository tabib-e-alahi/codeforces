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
        vector < int > v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end());
        int mx = v[n - 1];
        v.insert(v.begin(), mx);
        v.pop_back();

        int total = 0;
        for (int i = 1; i < n; i++)
        {
            total += (v[0] - v[1]);
        }

        cout << total << "\n";
    }

    return 0;
}