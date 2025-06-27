#include <iostream>
#include <vector>
using namespace std;
void storing(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        arr[i] = i + 1;
    }
}
long long int sqrt(vector<int> &arr)
{
    int start = 0, tar = arr[arr.size() - 1], end = tar, ans = -1;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        int square = mid * mid;
        if (square == tar)
        {
            return mid;
        }
        if (square < tar)
        {
            ans = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter element whose square root you want: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    long long int result = sqrt(arr);
    cout << "Integer Square Root Of " << size << " is " << result << endl;
}