#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        stack < int > caps;
        stack < int > small;
        stack < int > B_stack;
        stack < int > b_stack;

        for (int i = 0; i < s.length(); i++)
        {
            if (isupper(s[i]) && s[i] != 'B')
            {
                caps.push(i);
            }
            else if (islower(s[i]) && s[i] != 'b') {
                small.push(i);
            }
            else if (s[i] == 'B')
                B_stack.push(i);
            else if (s[i] == 'b')
                b_stack.push(i);
        }

        vector < int > v;

        while (!B_stack.empty() && !caps.empty())
        {
            if (B_stack.top() < caps.top())
            {
                v.push_back(caps.top());
                caps.pop();
            }
            else
            {
                caps.pop();
                B_stack.pop();
            }
        }
        
        while (!b_stack.empty() && !small.empty())
        {
            if (b_stack.top() < small.top())
            {
                v.push_back(small.top());
                small.pop();

            }
            else
            {
                small.pop();
                b_stack.pop();
            }
        }
        
        while(!caps.empty())
        {
            v.push_back(caps.top());
            caps.pop();
        }
        
        while(!small.empty())
        {
            v.push_back(small.top());
            small.pop();
        }
        
        sort(v.begin(), v.end());
        
        for(int i: v)
        {
            cout << s[i];
        }
        
        cout << "\n";
    }

    return 0;
}