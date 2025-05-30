#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        vector < int > a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector < int > b(m);
        for (int i = 0; i < m; i++)
            cin >> b[i];

        int r1 = 0, r2 = 0;

        vector < int > v;

        while (r1 < n || r2 < m)
        {
            bool isPossible = false;
            
            if (r1 < n && a[r1] == 0)
            {
                v.push_back(a[r1]);
                k++, r1++;
                isPossible = true;
            }
            else if (r2 < m && b[r2] == 0)
            {
                v.push_back(b[r2]);
                k++, r2++;
                isPossible = true;
            }
            else if (r1 < n && a[r1] <= k)
            {
                v.push_back(a[r1]);
                r1++;
                isPossible = true;
            }
            else if (r2 < m && b[r2] <= k)
            {
                v.push_back(b[r2]);
                r2++;
                isPossible = true;
            }
            
            if(!isPossible)
                break;
        }
        int sz = v.size();
        if (sz == n + m)
            for (int x: v)
                cout << x << " ";
        else
            cout << -1;

        cout << "\n";
    }


    return 0;
}