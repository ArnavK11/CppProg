#include <iostream>
using namespace std;

int main()
{
    int size, arr[size];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int max = 0;

    for (int j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
        }
        
    }
    
    cout << max;
    return 0;
}