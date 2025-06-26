#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void storing(vector<int> &v)
{
    cout << "Enter elements to store: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
}
int firstOcc(vector<int> &v, int target)
{
    int start = 0, end = v.size() - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (target == v[mid])
        {
            ans = mid;
            end = mid - 1;
        }
        else if (target < v[mid])
        {
            end = mid - 1;
        }
        else if (target > v[mid])
        {
            start = mid + 1;
        }
    }
    return ans;
}
int lastOcc(vector<int> &v, int target)
{
    int start = 0, end = v.size() - 1, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (target == v[mid])
        {
            ans = mid;
            start = mid + 1;
        }
        else if (target < v[mid])
        {
            end = mid - 1;
        }
        else if (target > v[mid])
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> v(size);
    storing(v);

    sort(v.begin(), v.end());

    int target = 0;
    cout << "Enter target Number: ";
    cin >> target;

    int first = firstOcc(v, target);
    int last = lastOcc(v, target);
    int total = (last - first) + 1;

    cout << "Sorted Array: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    if (first == -1 || last == -1)
    {
        cout << "Target Not Found!";
    }
    else
    {
        cout << "After Sorting Your Array!" << endl;
        cout << "Number Of Occurence Of Your Target " << target << " is " << total << endl;
    }
    return 0;
}
