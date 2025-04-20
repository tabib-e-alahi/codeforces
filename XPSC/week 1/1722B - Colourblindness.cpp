#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < char > v1(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }

        vector < char > v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        bool isSame = true;
        for (int i = 0; i < n; i++)
        {
            if((v1[i] == 'R' && v2[i] != 'R') || (v1[i] != 'R' && v2[i] == 'R')){
                isSame = false;
            }
        }
        
        if(isSame) cout << "YES\n";
        else cout << "NO\n";
        
    }
    return 0;
}