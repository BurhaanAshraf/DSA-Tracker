#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

void storing(vector<vector<int>> &matrix, int row, int col)
{
    cout << "Enter elements to store in your 2D Matrix: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

tuple<bool, int, int> binarySearch(vector<vector<int>> &matrix, int row, int col, int tar)
{
    int start = 0, end = (row * col) - 1, total_elements = row * col;
    int rowIndex = -1, colIndex = -1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        rowIndex = mid / col;
        colIndex = mid % col;
        if (matrix[rowIndex][colIndex] == tar)
        {
            return make_tuple(true, rowIndex, colIndex);
        }
        if (matrix[rowIndex][colIndex] < tar)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return make_tuple(false, -1, -1);
}

int main()
{
    int row, col;
    cout << "Enter Rows: ";
    cin >> row;
    cout << "Enter Col: ";
    cin >> col;
    vector<vector<int>> matrix(row, vector<int>(col));
    storing(matrix, row, col);
    int tar;
    cout << "Enter Target: ";
    cin >> tar;
    bool found;
    int finalRow, finalCol;
    tie(found, finalRow, finalCol) = binarySearch(matrix, row, col, tar);
    if (found)
    {
        cout << "Target is Present at Index (" << finalRow << "," << finalCol << ")";
    }
    else
    {
        cout << "Target is not present!";
    }
    return 0;
}