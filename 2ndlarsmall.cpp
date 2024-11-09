#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    int max1 = 0;
    int max2 = 0;
    int min1 = arr[0];
    int min2 = arr[0];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] > max1)
        {
            max1 = arr[j];
        }
    }

    for (int k = 0; k < 6; k++)
    {
        if (arr[k] > max2, arr[k] < max1)
        {
            max2 = arr[k];
        }
    }

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] < min1)
        {
            min1 = arr[j];
        }
    }

    for (int k = 0; k < 6; k++)
    {
        if (arr[k] < min2 && arr[k] > min1)
        {
            min2 = arr[k];
        }
    }

    cout << min1 << " 2nd smallest " << min2 <<  endl;
    cout << max1 << " 2nd largest " << max2 << endl;

    return 0;
}