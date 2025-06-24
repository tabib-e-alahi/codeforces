#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector < long long > v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    long long sum1 = 0, sum2 = 0, ans = 0;
    int l = 0, r = n - 1;

    while (l <= r)
    {
        if (sum1 < sum2)
        {
            sum1 += v[l];
            l++;
        }
        else
        {
            sum2 += v[r];
            r--;
        }
        if (sum1 == sum2)
            ans = sum1;
    }

    cout << ans << "\n";

    return 0;
}