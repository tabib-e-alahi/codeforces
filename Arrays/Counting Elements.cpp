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
    int count = 0;
    for(int i = 0; i < n; i++)
    {
       for(int j = 0; j < n; j++)
       {
           if( ar[i] + 1 == ar[j])
           {
               count++;
               break;
           }
       }
    }

    cout << count << endl;
    return 0;
}


