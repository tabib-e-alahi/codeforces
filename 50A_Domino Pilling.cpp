#include <bits/stdc++.h>
using namespace std;

int main() {
    int m ,n;
    cin >> m >> n;
    
    int cnt = 0;
    while(m > 1)
    {
        cnt += n;
        m = m - 2;
    }
    if(m == 1)
    {
        cnt += n/2;
    }
    
    cout << cnt << endl;
	return 0;
}
