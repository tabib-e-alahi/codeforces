#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string word;
        string mordern_name = "";
        while (ss >> word)
        {
            mordern_name += word[0];
        }

        cout << mordern_name << endl;
    }

}