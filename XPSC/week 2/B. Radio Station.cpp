#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    map<string, string> ip_with_names;
    while(n--)
    {
        string name, ip;
        cin >> name >> ip;
        ip = ip + ';';
        ip_with_names[ip] = name;
    }

    while(m--)
    {
        string command, ip;
        cin >> command >> ip;
        auto it = ip_with_names.find(ip);
        cout << command << " " << ip << " " << '#' << it->second << "\n"; 
    }

    return 0;
}