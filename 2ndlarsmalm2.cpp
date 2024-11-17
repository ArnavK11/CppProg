#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[6];
    int temp1, temp2;
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] > max1)
        {
            max2 = max1;
            max1 = arr[j];
        }

        else if (arr[j] > max2)
        {
            max2 = arr[j];
        }
    }

    for (int j = 0; j < 6; j++)
    {
        if (arr[j] < min1)
        {
            min2 = min1;
            min1 = arr[j];
        }

        else if (arr[j] < min2)
        {
            min2 = arr[j];
        }
    }

    cout << "Smallest: " << min1 << endl
         << "2nd smallest: " << min2 << endl;
    cout << "Largest: " << max1 << endl
         << "2nd largest: " << max2 << endl;

    return 0;
}