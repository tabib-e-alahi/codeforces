#include<bits/stdc++.h>
using namespace std;
int main()
{
    int M[6][6];
    int x,y;
	for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> M[i][j];
            if(M[i][j] == 1){
                x = i;
                y = j;
            }
        }
    }
    int row_op = abs(x - 3);
    int col_op = abs(y - 3);
    cout << (row_op + col_op)<<endl;
}

