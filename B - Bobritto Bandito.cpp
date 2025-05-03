#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        if(r == 0)
        {
            int x = r + m;
            cout << -x << " " << r << '\n';
        }
        else if(m > r)
        {
            int rem = m - r;
            cout << -rem << " " << r << endl;
        }
        else if(m <= r)
        {
            cout << 0 << " " << m << endl;
        }
        
    }
    return 0;
}
