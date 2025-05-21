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

        vector < int > v;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x != 0) v.push_back(x);
        }

        int sz_v = v.size();
        long long int sum = 0;
        int cnt_op = 0;
        int i = 0;

        while (i < sz_v)
        {
            if (i == sz_v - 1 && v[i] < 0) cnt_op++;
            else if (v[i] < 0 && v[i + 1] > 0)
            {

                cnt_op++;
            }

            sum += abs(v[i]);
            i++;
        }

        cout << sum << " " << cnt_op << "\n";
    }

    return 0;
}