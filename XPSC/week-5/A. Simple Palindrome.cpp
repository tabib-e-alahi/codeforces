#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string vowels = "aeiou";

    while (t--) {
        int n;
        cin >> n;

        int per_char = n / 5;
        int rem = n % 5;

        vector < int > v(5, per_char);

        for (int i = 1; i <= rem; i++)
        {
            v[i]++;
        }

        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < v[i]; j++)
            {
                cout << vowels[i];
            }
        }

        cout << "\n";
    }

    return 0;
}