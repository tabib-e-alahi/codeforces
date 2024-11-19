#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if(ch >= '0' && ch <= '9'){
        cout << "IS DIGIT\n";
    }

    else if(ch >= 'A' && ch <= 'z'){
            cout << "ALPHA\n";
            if(ch <= 'Z'){
                cout << "IS CAPITAL\n";
            }
            else{
                cout << "IS SMALL\n";
            }
    }
    return 0;
}
