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

        for (int i = 0, j = n - 1; i < j; i++, j--)
        {
            if (s[i] == s[j])
                break;
            else
                n -= 2;
        }

        cout << n << "\n";
    }
    return 0;
}