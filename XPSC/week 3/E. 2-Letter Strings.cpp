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

        vector<string> v(n);
        map<string, int> mp_freq;


        long long int num_pairs = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            string s = v[i];

            for (char ch = 'a'; ch <= 'k'; ch++) {
                if (ch != s[0]) {
                    string tmp = s;
                    tmp[0] = ch;
                    num_pairs += mp_freq[tmp];
                }
                if (ch != s[1]) {
                    string tmp = s;
                    tmp[1] = ch;
                    num_pairs += mp_freq[tmp];
                }
            }

            mp_freq[s]++;
        }

        cout << num_pairs << '\n';
    }

    return 0;
}
