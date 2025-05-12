#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first_ele = abs(a - 1);
        int second_ele = abs(b - c) + abs(c - 1);
        if (first_ele < second_ele)
        {
            cout << 1 << "\n";
        }
        else if (first_ele > second_ele)
        {
            cout << 2 << "\n";
        }
        else
            cout << 3 << "\n";
    }

    return 0;
}