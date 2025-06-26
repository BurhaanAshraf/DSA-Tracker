#include <iostream>
#include <vector>

using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements you want to store: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}
int findrepeating(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            {
                if (arr[i] == arr[j])
                {
                    return i + 1;
                }
            }
        }
    }
    return -1;
}
int main()
{
    int size = 0;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);
    storing(arr);
    cout << findrepeating(arr);
    return 0;
}