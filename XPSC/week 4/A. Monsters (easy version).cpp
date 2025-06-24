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
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int ans = 0, curr_min = 1;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (v[i] >= curr_min)
            {
                ans += (v[i] - curr_min);
                curr_min++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}