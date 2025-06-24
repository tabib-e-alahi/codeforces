#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset < int > ml;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        ml.insert(x);
    }
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        ml.insert(x);
    }

    for (int x: ml) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}