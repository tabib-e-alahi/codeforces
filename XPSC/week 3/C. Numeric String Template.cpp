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

        map < int, vector < int >> idx_A;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            idx_A[a[i]].push_back(i);
        }

        int m;
        cin >> m;
        while (m--) {
            string s;
            cin >> s;
            bool isSame = true;

            if (s.length() != n) {
                isSame = false;
            } else {
                map < char, vector < int >> idx_S;
                for (int i = 0; i < n; i++) {
                    idx_S[s[i]].push_back(i);
                }

                vector < vector < int >> vec_A;
                vector < vector < int >> vec_S;
                for (auto[key, val]: idx_A)
                {
                    vec_A.push_back(val);
                }
                for (auto[key, val]: idx_S)
                {
                    vec_S.push_back(val);
                }

                sort(vec_A.begin(), vec_A.end());
                sort(vec_S.begin(), vec_S.end());

                if (vec_A != vec_S)
                {
                    isSame = false;
                }

            }

            if (isSame)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}