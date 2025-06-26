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
    int start = 0, end = v.size() - 1, mid = start + ((end - start) / 2), ans = -1;

    while (start <= end)
    {
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
        mid = start + (end - start) / 2;
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

    int target;
    cout << "Enter your target number: ";
    cin >> target;

    int result = firstOcc(v, target);
    if (result != -1)
    {
        cout << "After Sorting Your Array!" << endl;
        cout << "First Occurence of " << target << " is at Index " << result << endl;
    }
    else
    {
        cout << "Target Not Found! " << endl;
    }
    // auto ans2 = lower_bound(v.begin(), v.end(), target);
    // cout << "Ans 2 is " << ans2 - v.begin() << endl;
    // lower_bound is inbuilt function used to find firstOcc!

    return 0;
}