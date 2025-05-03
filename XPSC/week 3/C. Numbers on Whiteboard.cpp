#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << 2 << "\n";
        for(int i = 1; i < n; i++)
        {
            if(i < 3)
            {
                cout << n - i << " " << n << "\n";
            }
            else{
                cout << n - i << " " << n - i + 2 << "\n";
            }
        }
    }
    
	return 0;
}
