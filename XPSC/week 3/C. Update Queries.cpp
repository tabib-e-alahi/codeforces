#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        set < int > ind;
        for (int i = 1; i <= m; i++)
        {
            int x;
            cin >> x;
            ind.insert(x);
        }

        string c;
        cin >> c;
        sort(c.begin(), c.end());
        int idx = 0;
        for (auto it = ind.begin(); it != ind.end(); it++)
        {
            s[ * it - 1] = c[idx];
            idx++;
        }
        cout << s << endl;
    }
    return 0;
}