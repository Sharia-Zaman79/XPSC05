#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int matrix_size;
        cin >> matrix_size;
        int max_val = matrix_size * matrix_size, min_val = 1;
        int matrix[matrix_size][matrix_size];
        for (int row = 0; row < matrix_size; row++)
        {
            if (row % 2 == 0)
            {
                for (int col = 0; col < matrix_size; col++)
                {
                    if (col % 2 == 0)
                    {
                        matrix[row][col] = max_val;
                        max_val--;
                    }
                    else
                    {
                        matrix[row][col] = min_val;
                        min_val++;
                    }
                }
            }
            else
            {
                for (int col = matrix_size - 1; col >= 0; col--)
                {
                    if (col % 2 == 1)
                    {
                        matrix[row][col] = max_val;
                        max_val--;
                    }
                    else
                    {
                        matrix[row][col] = min_val;
                        min_val++;
                    }
                }
            }
        }
        for (int row = 0; row < matrix_size; row++)
        {
            for (int col = 0; col < matrix_size; col++)
            {
                cout << matrix[row][col] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
