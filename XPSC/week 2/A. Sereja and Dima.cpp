#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector < int > v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int serejaSum = 0;
    int dimaSum = 0;
    int i = 1;
    while (n--)
    {
        if (i % 2 != 0)
        {
            if (v[0] > * (v.end() - 1))
            {
                serejaSum += v[0];
                v.erase(v.begin());
            }
            else
            {
                serejaSum += * (v.end() - 1);
                v.pop_back();
            }
        }
        else {
            if (v[0] > * (v.end() - 1))
            {
                dimaSum += v[0];
                v.erase(v.begin());
            }
            else
            {
                dimaSum += * (v.end() - 1);
                v.pop_back();
            }
        }
        
        i++;
    }
    
    cout << serejaSum << " " << dimaSum << endl;


    return 0;
}