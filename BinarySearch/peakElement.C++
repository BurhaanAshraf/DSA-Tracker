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
int peakElement(vector<int> &v)
{
    int start = 0, end = v.size() - 1;

    while (start < end)
    {
        int mid = start + ((end - start) / 2);
        if (v[mid] < v[mid + 1])
        {
            start = mid + 1;
        }
        else if (v[mid] > v[mid + 1])
        {
            end = mid;
        }
        return end;
    }
}
int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> v(size);
    storing(v);
    int result = peakElement(v);
    cout << "Peak Element is at Index " << result << endl;
    return 0;
}