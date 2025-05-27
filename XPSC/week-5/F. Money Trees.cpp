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
        vector < int > a(n);
        vector < int > h(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> h[i];

        int l = 0, r = 0, tmp = 0;
        vector < pair < int, int >> v;


        while (r < n - 1) {
            if (h[r] % h[r + 1] == 0) {
                tmp++;
                r++;
            } else {
                v.push_back({
                    l,
                    r
                });
                r++;
                l = r;
                tmp = 0;
            }
        }
        v.push_back({
            l,
            r
        });

        int mx = 0;

        for (auto p: v) {
            int left = p.first;
            int right = p.second;
            long long int sum = 0;
            for (int i = p.first; i <= right; i++)
            {
                sum += a[i];
                while (sum > k && left <= i)
                {
                    sum -= a[left];
                    left++;
                }
                mx = max(mx, i - left + 1);
            }
        }

        cout << mx << "\n";
    }

    return 0;
}