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
        string s;
        cin >> s;
        int cntO = 0;
        int i = 0;
        string s2 = "";
        while (i < n)
        {
            if (s[i] == '0')
            {
                cntO++;
                if (i == n - 1 && cntO > 0)
                {
                    s2 += '0';

                }

            }
            else
            {
                if (cntO > 0) s2 += '0';
                s2 += '1';
                cntO = 0;
            }

            i++;
        }

        int cnt_0 = 0, cnt_1 = 0;
        for (int i = 0; i < s2.length(); i++)
        {
            if (s2[i] == '0') cnt_0++;
            else cnt_1++;
        }

        cout << (cnt_1 > cnt_0 ? "YES\n" : "NO\n");
    }

    return 0;
}