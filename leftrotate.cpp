#include <iostream>
using namespace std;

int main()
{
    int arr[6], temp;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
        
    temp = arr[0];
    for (int j = 0; j < 5; j++)
    {
        arr[j] = arr[j+1];
    }
    arr[5] = temp;

    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    }
    
    cout << endl;
    
    return 0;
}