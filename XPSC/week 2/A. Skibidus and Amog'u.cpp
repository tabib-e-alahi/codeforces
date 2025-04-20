#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() <= 2)
        {
            s = 'i';
            cout << s << endl;
        }
        else {
            s.erase(s.end() - 2, s.end());
            cout << s + 'i' << endl;
        }

    }
    return 0;
}