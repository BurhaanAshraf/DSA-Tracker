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
int findSmallest(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1;
    while (start < end)
    {
        int mid = start + ((end - start) / 2);

        if (arr[mid] < arr[end])
        {
            end = mid;
        }
        else if (arr[mid] > arr[end])
        {
            start = mid + 1;
        }
    }
    return end;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);

    sort(arr.begin(), arr.end());
    cout << "After Sorting Array: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    int index;
    cout << "Enter Index for Pivot: " << endl;
    cin >> index;

    if (index < 0 || index >= arr.size())
    {
        cout << "Index out of bounds!" << endl;
        return -1;
    }

    pivot(arr, index);
    cout << "After Pivoting at Index " << index << endl;
    cout << "Array becomes: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    int result = findSmallest(arr);
    cout << "Smallest Number is " << arr[result] << " at Index " << result << endl;
    return 0;
}