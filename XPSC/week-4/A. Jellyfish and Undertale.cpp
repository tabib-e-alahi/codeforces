#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long int a, b;
        cin >> a >> b >> n;

        vector < long long int > tool(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> tool[i];
        }

        long long int max_time = 0;
        for (int i = 0; i < n; ++i)
        {
            max_time += min(tool[i], a - 1);
        }

        cout << b + max_time << "\n";
    }

    return 0;
}