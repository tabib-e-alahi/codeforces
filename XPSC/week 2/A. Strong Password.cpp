#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool isInserted = false;

        for (int i = 0; i < s.length() - 1; i++) {
            if (s[i] == s[i + 1]) {
                char ch;
                if (s[i] == 'z')
                    ch = s[i] - 1;
                else
                    ch = s[i] + 1;
                s.insert(i + 1, 1, ch);
                isInserted = true;
                break;
            }
        }

        if (!isInserted) {
            char ch;
            if (s[0] == 'z')
                ch = s[0] - 1;
            else
                ch = s[0] + 1;
            s = ch + s;
        }

        cout << s << "\n";
    }

    return 0;
}