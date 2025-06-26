#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void findelement(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = arr[i];
        if (arr[i] != arr[index - 1])
        {
            swap(arr[i], arr[index - 1]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Missing element is " << i + 1 << " ";
        }
    }
}

int main()
{
    int size = 0;
    cout << "Enter size of vector: ";
    cin >> size;

    vector<int> arr(size);

    storing(arr);
    findelement(arr);
}