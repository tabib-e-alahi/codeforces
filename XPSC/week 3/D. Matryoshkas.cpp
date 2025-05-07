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
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ml.insert(x);
        }

        int ans = 0;

        while (!ml.empty()) {
            int currMin = * (ml.begin());
            while (true)
            {
                auto it = ml.find(currMin);
                if (it != ml.end())
                {
                    ml.erase(it);
                    currMin = currMin + 1;
                }
                else
                {
                    ans++;
                    break;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}