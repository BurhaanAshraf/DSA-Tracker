#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void storing(vector<int> &arr)
{
    cout << "Enter elements to store: " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

void sorting(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}

vector<int> findcommon(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int i = 0, j = 0, k = 0;
    set<int> st;
    vector<int> ans;

    while (i < arr1.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            st.insert(arr1[i]);

            i++,
                j++, k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    for (auto i : st)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    int size1;
    cout << "Enter size of array 1: ";
    cin >> size1;
    vector<int> arr1(size1);
    storing(arr1);

    int size2;
    cout << "Enter size of array 2: ";
    cin >> size2;
    vector<int> arr2(size2);
    storing(arr2);

    int size3;
    cout << "Enter size of array 3: ";
    cin >> size3;
    vector<int> arr3(size3);
    storing(arr3);

    sorting(arr1);
    sorting(arr2);
    sorting(arr3);

    vector<int> result = findcommon(arr1, arr2, arr3);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}