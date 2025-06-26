#include <iostream>
#include <vector>
using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter 0s, 1s , 2s only: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
void swapping(vector<int> &arr, int low, int medium, int high)
{
    while (medium <= high)
    {
        if (arr[medium] == 0)
        {
            swap(arr[low], arr[medium]);
            low++;
            medium++;
        }
        else if (arr[medium] == 1)
        {
            medium++;
        }
        else
        {
            swap(arr[medium], arr[high]);
            high--;
        }
    }
}
void printing(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int size;
    cout << "Enter size of Array: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    int low = 0, medium = 0, high = arr.size() - 1;
    swapping(arr, low, medium, high);
    cout << "Sorted Array: ";
    printing(arr);
    return 0;
}