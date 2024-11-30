#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i, res = 0;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        string s;
        cin >> s;
        if(s == "X++" ||s == "++X")
        {
            res += 1;
        }
        else{
            res -= 1;
        }
    }

    cout << res << endl;

    return 0;
}


