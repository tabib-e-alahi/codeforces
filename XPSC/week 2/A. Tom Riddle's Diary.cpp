#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<string> names;
    while (n--) {
        string s;
        cin >> s;
        names.push_back(s);
    }
    stack<pair<string, int>> st;
    for(auto it = names.end()-1; it >= names.begin(); it--)
    {
        auto found = find(names.begin(), it, *it);
        if(found != it)
            st.push({*it, 1});
        else
            st.push({*it, 0});
    }
    
    while(!st.empty())
    {
        auto p = st.top();
        if(p.second == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
        st.pop();
    }

    return 0;
}