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
    int start = 0, tar = arr.size(), end = tar, ans = -1;
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
double morePrecision(vector<int> &arr, int precision, double finalAns)
{
    double step = 0.1;
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; j * j <= arr[arr.size() - 1]; j += step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    return finalAns;
}

int main()
{
    int size;
    cout << "Enter element whose square root you want: ";
    cin >> size;
    vector<int> arr(size);
    storing(arr);
    long long int result = sqrt(arr);
    double finalAns = result;
    int precision;
    cout << "Enter number of floating digits after integer: ";
    cin >> precision;
    double squareRoot = morePrecision(arr, precision, finalAns);
    cout << squareRoot << endl;
    return 0;
}