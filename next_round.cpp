#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int count = k;
    for(int i = 1; i <= n; i++)
    {
        if(i <= k){
            if(a[i] <= 0){
                count--;
            }
        }
        else if(a[k] > 0){
            if(a[i] >= a[k]){
                count++;
            }
        }
    }

    cout << count <<endl;
}
