#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<long long int> ar(n+1);
    vector<long long int> f(n+1);
    for(int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }

    f[1] = ar[1];
    for(int i=2; i <= n; i++)
    {
        f[i] = f[i-1] + ar[i];
    }

    while(q--)
    {
        int left, right;
        cin >> left >> right;
        long long int sum;
        if(left == 1)
        {
            sum = f[right];
        }
        else{
            sum = (f[right] - f[left-1]);
        }

        cout << sum << endl;
    }
    return 0;
}




