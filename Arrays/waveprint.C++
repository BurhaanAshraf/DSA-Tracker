#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row = 0, col = 0;
    cout << "Enter Number of Rows: ";
    cin >> row;
    cout << "Enter Number of Columns: ";
    cin >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter elements to store: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < col; i++) // Outer loop to run column wise
    {
        if ((i & 1) == 0)
        {
            for (int j = 0; j < row; j++) // If column index is even → traverse top to bottom
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = row - 1; j >= 0; j--) // If column index is odd → traverse bottom to top
            {
                cout << arr[j][i] << " ";
            }
        }
    }

    return 0;
}
