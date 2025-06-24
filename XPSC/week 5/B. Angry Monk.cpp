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
        int mx = 0;
        vector < int > v;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int op_1_cnt = 0, cnt = 0;
        for (int i = 0; i < k - 1; i++)
        {
            if (v[i] > 1)
            {
                op_1_cnt += (v[i] - 1);
            }
            cnt += v[i];
        }
        cout << op_1_cnt + cnt << "\n";
    }

    return 0;
}