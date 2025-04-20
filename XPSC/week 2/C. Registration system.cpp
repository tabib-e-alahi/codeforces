#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    map < string, int > names;
    while (n--) {
        string s;
        cin >> s;
        auto it = names.find(s);
        if (it != names.end())
        {
            it->second++;
            cout << it->first << it->second << "\n";
        }
        else
        {
            cout << "OK\n";
            names[s] = 0;
        }
    }

    return 0;
}