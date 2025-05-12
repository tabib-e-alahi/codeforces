#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string t;
        cin >> t;
        string s = "";
        int i = 0;
        while (i < n)
        {
            if ((i < n - 2) && t[i + 2] == '0' && t[i + 3] != '0')
            {
                char ch = (t[i] - '0') * 10 + (t[i + 1] - '0') - 1 + 'a';
                s += ch;
                i += 3;
            }
            else
            {
                char ch = (t[i] - '0') - 1 + 'a';
                s += ch;
                i++;
            }
        }
        
        cout << s << "\n";
    }

    return 0;
}