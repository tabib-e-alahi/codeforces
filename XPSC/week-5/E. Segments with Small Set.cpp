#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector < int > v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int l = 0, r = 0;
    long long int ans = 0;
    map < int, int > mp;
    int unique = 0;

    while (r < n) {
        mp[v[r]]++;
        if (mp[v[r]] == 1) unique++;

        while (unique > k) {
            mp[v[l]]--;
            if (mp[v[l]] == 0) unique--;
            l++;
        }

        ans += r - l + 1;
        r++;
    }

    cout << ans << "\n";
    return 0;
}