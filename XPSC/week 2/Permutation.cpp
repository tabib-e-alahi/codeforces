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
        map < int, int > mp;
        vector < vector < int >> v(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
                if (j == 0)
                    mp[x]++;
            }
        }
        int firstVal = -1;
        int firstkey = -1;


        for (auto[key, val]: mp)
        {
            if (firstVal < val)
            {
                firstkey = key;
                firstVal = val;
            }
        }
        vector < int > org_seq;
        for (int i = 0; i < n; i++) {
            if (find(v[i].begin(), v[i].end(), firstkey) == v[i].end()) {
                org_seq = v[i];
                break;
            }
        }
        
        cout << firstkey;
        
        for(int x: org_seq)
        {
            cout <<" " << x;
        }
        cout << "\n";

    }

    return 0;
}