#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.size() < 5)
    {
        cout << s <<endl;
        return 0;
    }

    for(int i = 0; i < s.size() - 4; i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G'&& s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T' )
        {
            s.replace(i, 5, " ");
        }
    }

    cout << s <<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s.size() < 5)
    {
        cout << s <<endl;
        return 0;
    }

    for(int i = 0; i < s.size() - 4; i++)
    {
        if(s[i] == 'E' && s[i+1] == 'G'&& s[i+2] == 'Y' && s[i+3] == 'P' && s[i+4] == 'T' )
        {
            s.replace(i, 5, " ");
        }
    }

    cout << s <<endl;
}
