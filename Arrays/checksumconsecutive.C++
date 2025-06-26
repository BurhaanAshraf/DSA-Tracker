#include <iostream>
#include <vector>
using namespace std;

void storingarray(vector<int> &arr)
{
    cout << "Enter elements to store in array :" << endl;
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
    }
}
bool checkingsum(vector<int> &arr, int target, int &idx, int &idx2)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] + arr[i + 1] == target)
        {
            idx = i;
            idx2 = i + 1;
            return true;
        }
    }
    return false;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int idx = 0, idx2 = 0;
    vector<int> arr(size);
    storingarray(arr);
    int target;
    cout << "Enter the sum: ";
    cin >> target;
    bool result = checkingsum(arr, target, idx, idx2);

    if (result)
    {
        cout << "Index " << idx << " and " << "index " << idx2 << " make sum = " << target << endl;
    }
    else
    {
        cout << "Not found!";
    }
    return 0;
}