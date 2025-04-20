#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<pair<string, string>> leaf;
    for(int i = 0; i < n; i++)
    {
        string sp, color;
        cin >> sp >> color;
        leaf.insert({sp, color});
    }
    
    // for(auto it = leaf.begin(); it != leaf.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    cout << leaf.size() << "\n";

    return 0;
}