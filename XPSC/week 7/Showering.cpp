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
        long long int s, m;
        cin >> n >> s >> m;

        vector < pair < int, int > > v;
        for (int i = 0; i < n; i++)
        {
            int l, r;
            cin >> l >> r;
            v.push_back({
                l,
                r
            });
        }

        bool can_shower = false;

        int start = 0;

        for (auto[l, r]: v)
        {
            if (!can_shower && s <= (l - start))
            {
                can_shower = true;
            }
            start = r;
        }

        if (!can_shower && s <= (m - start))
        {
            can_shower = true;
        }

        if (can_shower) cout << "YES\n";
        else cout << "NO\n";

    }

    return 0;
}