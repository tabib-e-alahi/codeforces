#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, W;
        cin >> n >> W;

        map < int, int, greater < int >> mp;

        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            mp[x]++;
        }

        int hght = 0;

        while (n > 0) {
            int space = W;
            for (auto it = mp.begin(); it != mp.end(); it++) {
                int w = it -> first;
                int cnt = it -> second;

                int box_cnt = min(cnt, space / w);
                space -= box_cnt * w;
                it -> second -= box_cnt;
                n -= box_cnt;
            }

            hght++;
        }

        cout << hght << '\n';
    }

    return 0;
}