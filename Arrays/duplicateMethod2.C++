#include <iostream>
#include <vector>

using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements you want to store upto " << arr.size() - 1 << endl;
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
    }
}
int findduplicate(vector<int> &arr)
{
    int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        // checking if already visited
        if (arr[index] < 0)
        {
            ans = index;
            break;
        }
        else
        {
            // marking Index
            arr[index] = arr[index] * -1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    vector<int> arr(size);
    storing(arr);
    cout << findduplicate(arr);
    return 0;
}