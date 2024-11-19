#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int min_number = min({x, y, z});
    int max_number = max({x, y, z});
    cout << min_number << " " << max_number << endl;
    return 0;
}
