#include <bits/stdc++.h>

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int screen_y = (y + 1) / 2;

        int screen_x = abs(15 * screen_y - 4 * y);
        if (screen_x >= x)
            cout << screen_y << "\n";
        else
        {
            int rem_x = x - screen_x;
            int need_x = (rem_x / 15);
            if(rem_x % 15 != 0) need_x++;
            cout << screen_y + need_x << "\n";
        }
    }

    return 0;
}