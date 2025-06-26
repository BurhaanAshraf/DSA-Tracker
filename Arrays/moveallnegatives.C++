#include <iostream>
#include <vector>
using namespace std;
void storingarr(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        cout << "Empty Array Found!";
    }
    else
    {
        cout << "Enter the elements you want to store in array: " << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            cin >> arr[i];
        }
    }
}
void negatives(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        if (arr[low] < 0)
        {
            low++;
        }
        else if (arr[high] >= 0)
        {
            high--;
        }
        else
        {
            swap(arr[low], arr[high]);
            low++;
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
    cout << "Enter size of an array: ";
    cin >> size;
    vector<int> arr(size);
    storingarr(arr);
    negatives(arr);
    printing(arr);
    return 0;
}