#include <iostream>
#include <vector>
using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void missingelement(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index - 1] *= -1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            cout << "Missing element is " << i + 1 << " ";
        }
    }
}

int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    missingelement(arr);
    return 0;
}