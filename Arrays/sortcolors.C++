#include <iostream>
#include <vector>
using namespace std;

void storing(vector<int> &num)
{
    cout << "Enter 0s , 1s , 2s only: " << endl;
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }
}
void counting(vector<int> &num, int &zerocount, int &onecount, int &twocount)
{
    for (int i = 0; i < num.size(); i++)
    {
        if (num[i] == 0)
        {
            zerocount = zerocount + 1;
        }
        else if (num[i] == 1)
        {
            onecount = onecount + 1;
        }
        else
        {
            twocount = twocount + 1;
        }
    }
}

void newvector(vector<int> &num, int &zerocount, int &onecount, int &twocount)
{
    // I forgot to clear the vector before adding elements again.
    num.clear();
    // Result ? Vector size doubled and I was puzzled for a long time ! Lesson learned num.clear();

    for (int i = 0; i < zerocount; i++)
    {
        num.push_back(0);
    }
    for (int i = 0; i < onecount; i++)
    {
        num.push_back(1);
    }
    for (int i = 0; i < twocount; i++)
    {
        num.push_back(2);
    }
}

void printing(vector<int> &num)
{
    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    int zerocount = 0, onecount = 0, twocount = 0;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> num(n);
    storing(num);
    counting(num, zerocount, onecount, twocount);
    newvector(num, zerocount, onecount, twocount);
    printing(num);
    return 0;
}