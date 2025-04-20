#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    stack<string> names;
    while (n--) {
        string s;
        cin >> s;
        names.push(s);
    }

    map<string, int> name_list;
    int i = 0;
    while(!names.empty())
    {
        name_list.insert({names.top(), i++});
        names.pop();
    }
    map<int, string> sorted_name_list;
    for(auto[name, val]: name_list)
    {
        sorted_name_list.insert({val, name});
    }
    
    for(auto[name, val]: sorted_name_list)
    {
        cout << val << "\n";
    }

    return 0;
}