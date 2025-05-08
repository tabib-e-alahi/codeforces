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
        vector < int > v(n);
        set < int > s;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s.insert(v[i]);
        }

        int left = 0, right = n - 1;
        bool isPresent = false;
        while (left < right)
        {
            int mn = * (s.begin());
            int mx = * (--s.end());

            if (v[left] != mn && v[left] != mx && v[right] != mn && v[right] != mx)
            {
                isPresent = true;
                break;
            }
            else if (v[left] == mn || v[left] == mx)
            {
                s.erase(v[left]);
                left++;
            }
            else if (v[right] == mn || v[right] == mx)
            {
                s.erase(v[right]);
                right--;
            }
        }

        if (isPresent)
        {
            cout << left + 1 << " " << right + 1 << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }
    }

    return 0;
}