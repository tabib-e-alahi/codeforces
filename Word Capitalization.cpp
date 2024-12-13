#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(i == 0){
            toupper(str[i]);
        }
    }
    cout << str <<endl;
    return 0;
}



