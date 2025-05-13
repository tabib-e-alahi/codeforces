#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int cnt_w = 0;

        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') cnt_w++;
        }

        int re_color = cnt_w;

        for (int i = k; i < n; i++) {
            if (s[i - k] == 'W') cnt_w--;
            if (s[i] == 'W') cnt_w++;
            re_color = min(re_color, cnt_w);
        }

        cout << re_color << endl;
    }

    return 0;
}