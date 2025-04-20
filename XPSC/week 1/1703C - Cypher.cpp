#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector < int > v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n; i++)
        {
            int num_op;
            cin >> num_op;
            for (int j = 0; j < num_op; j++)
            {
                char move;
                cin >> move;
                if (move == 'D')
                {
                    if (v[i] == 9)
                    {
                        v[i] = 0;
                    }
                    else {
                        v[i] = v[i] + 1;
                    }
                }
                else {
                    if (v[i] == 0)
                    {
                        v[i] = 9;
                    }
                    else {
                        v[i] = v[i] - 1;
                    }
                }
            }

        }

        for (int x: v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}