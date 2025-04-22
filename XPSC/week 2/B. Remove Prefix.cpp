#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > v;
        map < int, int > mp;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            v.push_back(x);
            mp[x]++;
        }

        int idx = -1;

        for (int i = 0; i < n; i++)
        {
            if (mp[v[i]] > 1)
            {
                idx = i;
                mp[v[i]]--;
            }
        }

        cout << idx + 1 << "\n";

    }

    return 0;
}