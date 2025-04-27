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
        string s;
        cin >> s;

        long long int total = 0;
        vector < long long int > v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                total += i;
                v.push_back((n - i - 1) - i);
            }
            else {
                total += n - i - 1;
                v.push_back(i - (n - i - 1));
            }
        }

        sort(v.begin(), v.end(), greater < long long int > ());
        vector < long long int > v_update;
        long long int current_ttl = total;

        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                current_ttl += v[i]; // apply the improvement
            }
            v_update.push_back(current_ttl);
        }

        for (long long int x: v_update)
        {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}