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
       auto it = find(ar.begin(), ar.end(), ar[i]+1);
       if(it != ar.end())
       {
           count++;
       }
    }

    cout << count << endl;
    return 0;
}



