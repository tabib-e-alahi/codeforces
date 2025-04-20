#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    long long int sum = 0;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        
        sum += x;
        
        if(x % 2 != 0)
            v.push_back(x);
    }
    
    if(sum % 2 == 0)
        cout << sum << endl;
    else
    {
        sort(v.begin(), v.end());
        sum -= v[0];
        cout << sum << endl;
    }
    return 0;
}