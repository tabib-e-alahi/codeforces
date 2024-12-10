#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for(int i = 0; i < n; i++)
    {
       ar[i] < 0 ? ar[i] = 2 : (ar[i] == 0 ? ar[i] = 0 : ar[i] = 1);
    }

    for(int x: ar)
    {
        cout << x << " ";
    }
    return 0;
}

