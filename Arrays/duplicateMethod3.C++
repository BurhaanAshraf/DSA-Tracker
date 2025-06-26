#include <iostream>
#include <vector>
using namespace std;
void storing(vector<int> &arr)
{
    cout << "Enter elements from 1 to " << arr.size() - 1 << " (with one duplicate):" << endl;
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
    }
}

int findduplicate(vector<int> &arr)
{
    while (arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main()
{
    int size;
    cout << "Enter size of vector: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    cout << findduplicate(arr);
    return 0;
}