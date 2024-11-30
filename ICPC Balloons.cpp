#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, j;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        cin >> n;
        string s;
        cin >> s;
        int f[26] = {0};
        for(j = 0; j < n; j++){
                int index = s[j] - 'A';
                f[index] += 1;
        }
        int balloons = 0;
        int problem = 0;
        for(j = 0; j < 26; j++){
            if(f[j] > 0){
                    problem++;
                    balloons += f[j];
            }
        }

        cout << (balloons + problem) <<endl;
    }
}

