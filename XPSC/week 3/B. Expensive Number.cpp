#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int len = s.length();
        vector < int > non_zero_idx;
        for (int i = 0; i < len; i++)
        {
            if (s[i] != '0')
                non_zero_idx.push_back(i);
        }

        cout << (non_zero_idx.size() - 1) + (len - non_zero_idx.back() - 1) << endl;
    }
    return 0;
}