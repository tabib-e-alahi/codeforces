#include <bits/stdc++.h>

using namespace std;

int min_deletion(string s, char ch) {
    int l = 0, r = s.length() - 1;
    int del = 0;

    while (l < r) {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
        {
            if (s[l] == ch)
            {
                l++;
                del++;
            }
            else if (s[r] == ch)
            {
                r--;
                del++;
            }
            else
            {
                return -1;
            }
        }
    }
    return del;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        string s2 = s;
        reverse(s2.begin(), s2.end());
        if (s == s2) {
            cout << 0 << endl;
            continue;
        }

        int ans = -1;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int res = min_deletion(s, ch);
            if (res != -1) {
                if (ans == -1 || res < ans) {
                    ans = res;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}