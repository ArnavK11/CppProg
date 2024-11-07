#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    bool Inc = true;
    bool Dec = true;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 5; j++)
    {
        if (arr[j] < arr[j + 1])
        {
            Dec = false;
        }

        else if (arr[j] > arr[j + 1])
        {
            Inc = false;
        }

        else
        {
            Dec = false;
            Inc = false;
        }
    }

    if (Inc)
    {
        cout << "Array is SORTED in increasing order" << endl;
    }
    else if (Dec)
    {
        cout << "Array is SORTED in decreasing order" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}