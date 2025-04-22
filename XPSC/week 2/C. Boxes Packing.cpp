#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector < int > v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    int visible_Cnt = 0;
    for (auto[key, val]: mp)
    {
        visible_Cnt = max(val, visible_Cnt);
    }
    cout << visible_Cnt << "\n";

    return 0;
}