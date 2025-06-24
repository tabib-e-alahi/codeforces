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

        map < int, int > mp;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }

        vector < int > v;
        for (auto[val, cnt]: mp)
        {
            if (cnt >= k)
            {
                v.push_back(val);
            }
        }

        if (v.empty())
        {
            cout << "-1\n";
        }
        else
        {
            int l = v[0], r = v[0];
            int max_l = v[0], max_r = v[0];
            int max_len = 1;

            for (int i = 1; i < v.size(); i++)
            {
                if (v[i] == v[i - 1] + 1)
                {
                    r = v[i];
                }
                else
                {
                    if (r - l + 1 > max_len)
                    {
                        max_len = r - l + 1;
                        max_l = l;
                        max_r = r;
                    }
                    l = v[i];
                    r = v[i];
                }
            }

            if (r - l + 1 > max_len)
            {
                max_l = l;
                max_r = r;
            }

            cout << max_l << " " << max_r << "\n";
        }


    }

    return 0;
}