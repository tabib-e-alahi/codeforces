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

        vector < char > v;
        set < char> st;
        for (int i = 0; i < n; i++) {
            char x;
            cin >> x;
            v.push_back(x);
            st.insert(x);
        }
        vector<int> v2(st.begin(), st.end());
        map<char, char> mp;

        for (auto left = v2.begin(), right = v2.end() - 1; left != v2.end() && right >= v2.begin(); left++, right--)
        {
            mp[*left] = *right; 
        }
        
        for(char ch: v)
        {
            cout << mp[ch];
        }

        cout << endl;

    }

    return 0;
}