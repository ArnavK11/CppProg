#include <iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < size; j++)
    {
        if (arr[j] == 0)
        {
            for (int i = j; i < size-1; i++)
            {
                arr[i] = arr[i + 1];
            }

            arr[size - 1] = 0;
            j--;
        }
    }

    cout << "Size: " << size << endl;
    cout << "Updated array: ";

    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}