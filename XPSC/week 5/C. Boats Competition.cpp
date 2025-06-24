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

        sort(v.begin(), v.end());

        int ans = 0;

        for (int sum = 1; sum <= 100; sum++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l < r)
            {
                if (v[l] + v[r] == sum)
                {
                    cnt++;
                    l++, r--;
                }
                else if (v[l] + v[r] < sum)
                {
                    l++;
                }
                else
                    r--;
            }
            ans = max(ans, cnt);
        }

        cout << ans << "\n";

    }

    return 0;
}