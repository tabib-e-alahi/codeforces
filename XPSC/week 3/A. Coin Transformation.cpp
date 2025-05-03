#include <bits/stdc++.h>
using namespace std;

long long int coin_transformation(long long int n)
{
    
    if(n <= 3)
        return 1;
  
    long long int a = coin_transformation(n / 4);
    return 2 * a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        cout << coin_transformation(n) << "\n";
    }
    
	return 0;
}
