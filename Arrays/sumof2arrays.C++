#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements to store: " << endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

vector<int> sum(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    int i = arr1.size() - 1;
    int j = arr2.size() - 1;
    int carry = 0;

    while (i >= 0 && j >= 0)
    {
        int x = arr1[i] + arr2[j] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        i--, j--;
    }
    while (i >= 0)
    {
        int x = arr1[i] + 0 + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        i--;
    }
    while (j >= 0)
    {
        int x = 0 + arr2[j] + carry;
        int digit = x % 10;
        ans.push_back(digit);
        carry = x / 10;
        j--;
    }
    if (carry)
        ans.push_back(carry);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n, m;

    cout << "Enter size of array 1: ";
    cin >> n;
    vector<int> arr1(n);
    storing(arr1);

    cout << "Enter size of array 2: ";
    cin >> m;
    vector<int> arr2(m);
    storing(arr2);

    for (int i : sum(arr1, arr2))
    {
        cout << i;
    }
    return 0;
}