#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m, q;
        cin >> n >> m >> q;

        set < int > teachers;
        for (int i = 0; i < m; ++i) {
            int cell;
            cin >> cell;
            teachers.insert(cell);
        }

        while (q--) {
            int a;
            cin >> a;

            auto it = teachers.lower_bound(a);

            if (it == teachers.begin())
            {
                cout << ( * it - 1) << "\n";
            }
            else if (it == teachers.end())
            {
                auto previous_val_of_it = it;
                previous_val_of_it--;
                cout << n - * previous_val_of_it << "\n";
            }
            else
            {
                auto previous_val_of_it = it;
                previous_val_of_it--;
                int left = * previous_val_of_it;
                int right = * it;
                if (a == left || a == right)
                {
                    cout << 0 << "\n";
                }
                else
                {
                    cout << (right - left) / 2 << "\n";
                }
            }
        }
    }

    return 0;
}