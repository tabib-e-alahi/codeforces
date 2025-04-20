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
        vector < int > v;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
                v.push_back(i);
        }

        cout << * (v.end() - 1) - * v.begin() + 1 << "\n";

    }

    return 0;
}