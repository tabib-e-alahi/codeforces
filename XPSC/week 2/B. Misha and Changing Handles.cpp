#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<pair<string, string>> v;
    while(q--)
    {
        string old_hanle, new_handle;
        cin >> old_hanle >> new_handle;
        
        bool isExist = false;
        for(int i = 0; i < v.size(); i++)
        {
            if(v[i].second == old_hanle)
            {
                v[i].second = new_handle;
                isExist = true;
                break;
            }
        }
        
        if(!isExist)
            v.push_back({old_hanle, new_handle});
    }
    
    cout << v.size() << "\n";
    for(auto p: v)
    {
        cout << p.first << " " << p.second << "\n";
    }
	return 0;
}
