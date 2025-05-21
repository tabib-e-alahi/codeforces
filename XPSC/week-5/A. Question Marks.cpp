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
        cin >> n;
        string s;
        cin >> s;
        int cnt_A = 0, cnt_B = 0, cnt_C = 0, cnt_D = 0, cnt_Error = 0;

        for (int i = 0; i < 4 * n; i++)
        {
            if (s[i] == 'A') cnt_A++;
            else if (s[i] == 'B') cnt_B++;
            else if (s[i] == 'C') cnt_C++;
            else if (s[i] == 'D') cnt_D++;
            else cnt_Error++;
        }

        cnt_A = min(cnt_A, n);
        cnt_B = min(cnt_B, n);
        cnt_C = min(cnt_C, n);
        cnt_D = min(cnt_D, n);

        int marks_reduced = (n - cnt_A) + (n - cnt_B) + (n - cnt_C) + (n - cnt_D);

        cout << (4 * n) - marks_reduced << "\n";
    }

    return 0;
}