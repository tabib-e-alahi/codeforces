#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int t_rem = 240 - k; 
    
    if (t_rem < 5) {
        cout << 0 << endl;
    } else {
        int pblms = 0;
        int i = 1;
        int need_time = 0;

        while (need_time + 5 * i <= t_rem && pblms < n) { 
            need_time += 5 * i;
            pblms++;
            i++;
        }

        cout << pblms << endl;
    }

    return 0;
}
