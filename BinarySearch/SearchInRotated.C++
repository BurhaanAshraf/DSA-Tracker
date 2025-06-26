#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements to store: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
void pivot(vector<int> &arr, int index)
{
    int start, end;
    start = 0, end = index - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
    start = index, end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
    reverse(arr.begin(), arr.end());
}

int searching(vector<int> &arr, int tar)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] == tar)
        {
            return mid;
        }
        if (arr[start] <= arr[mid]) // left part is sorted
        {
            if (arr[start] <= tar && tar <= arr[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else // Right Part Is Sorted
        {
            if (arr[mid] <= tar && tar <= arr[end])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);
    storing(arr);
    sort(arr.begin(), arr.end());
    cout << "Sorted Array: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int index;
    cout << "Enter index for pivot: ";
    cin >> index;
    if (index < 0 || index >= arr.size())
    {
        cout << "Index out of bounds!";
        return -1;
    }
    pivot(arr, index);
    cout << "After Pivoting at Index " << index << endl;
    cout << "New Array is: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    int num;
    cout << "Enter Number to Find: ";
    cin >> num;
    int result = searching(arr, num);
    cout << result << endl;
}