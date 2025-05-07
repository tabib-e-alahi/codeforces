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
        multiset < int > ml;
        long long int army_power = 0;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
                ml.insert(x);
            else if (x == 0 && !ml.empty())
            {
                auto it = ml.end();
                it--;
                army_power += * it;
                ml.erase(it);
            }

        }

        cout << army_power << "\n";
    }
    return 0;
}