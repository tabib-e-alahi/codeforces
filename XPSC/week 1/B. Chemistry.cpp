#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int frq[26] = {0};
        for (int i = 0; i < n; i++) {
            frq[s[i] - 'a']++;
        }

        int oddCharCnt = 0;
        for (int i = 0; i < 26; i++) {
            if (frq[i] % 2 != 0) oddCharCnt++;
        }

        if (k + 1 < oddCharCnt) {
            cout << "NO\n";

        } else {
            cout << "YES\n";
        }
    }
    return 0;
}