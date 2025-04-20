#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt_one = count(v.begin(), v.end(), 1);
        int spell_decreased = cnt_one / 2;
        cout << n - spell_decreased << endl;
    }

    return 0;
}