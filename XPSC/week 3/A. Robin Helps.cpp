#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector < int > v(n);
        int robin = 0;
        int gold_given_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] >= k)
                robin += v[i];
            else if (robin > 0 && v[i] == 0)
            {
                gold_given_cnt++;
                robin--;
            }
        }

        cout << gold_given_cnt << "\n";
    }

    return 0;
}