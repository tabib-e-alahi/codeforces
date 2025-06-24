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

        int l = 0, r = 0;
        int ans = 0;

        while (r < n) {
            if (r - l + 1 == k) {
                if (s[l] == 'B') {
                    ans++;
                    for (int j = l; j < l + k; j++) {
                        s[j] = 'W';
                    }
                }
                l++, r++;
            }
            else if (r - l + 1 < k) {
                r++;
            }
        }

        for (int i = n - k + 1; i < n; i++) {
            if (i >= 0 && s[i] == 'B') {
                ans++;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}