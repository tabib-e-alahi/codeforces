#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    int res = str1.compare(str2);
    res == 0 ? cout << 0 << endl : (res > 0 ? cout << 1 <<endl : cout << -1 << endl);
    return 0;
}


