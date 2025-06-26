#include <iostream>
#include <vector>

using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements to store: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

int missingElement(vector<int> &arr)
{
    int start = 0, end = arr.size() - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (mid + 1 == arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            ans = mid + 1;
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    int result = missingElement(arr);
    cout << result << endl;
    return 0;
}