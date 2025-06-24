#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector < long long int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        set < long long int > s;
        long long int sum = 0;
        int prefix = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            s.insert(v[i]);

            if (sum % 2 == 0)
            {
                long long int x = sum / 2;
                if (s.count(x))
                {
                    prefix++;
                }
            }
        }

        cout << prefix << "\n";
    }

    return 0;
}