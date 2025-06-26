#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int row = 0, col = 0;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of cols: ";
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

    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = col - 1;
    int total_elements = row * col;
    int count = 0;

    vector<int> ans;

    while (count < total_elements)
    {
        // First row →
        for (int i = startingCol; i <= endingCol && count < total_elements; i++)
        {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;

        // Last col ↓
        for (int i = startingRow; i <= endingRow && count < total_elements; i++)
        {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        // Last row ←
        for (int i = endingCol; i >= startingCol && count < total_elements; i--)
        {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;

        // First col ↑
        for (int i = endingRow; i >= startingRow && count < total_elements; i--)
        {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}