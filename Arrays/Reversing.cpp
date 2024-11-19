#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int a[n];
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    for(i = 0; i < n; i++)
    {
        cout << a[i] <<" ";
    }
    return 0;
}
