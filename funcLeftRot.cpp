#include <iostream>
using namespace std;

void leftRotate(int array[], int n);

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The left rotated array is: ";
    leftRotate(arr, size);

    return 0;
}

void leftRotate(int array[], int n)
{
    int temp;
    temp = array[0];

    for (int i = 0; i < n-1; i++)
    {
        array[i] = array[i+1];
    }
    
    array[n-1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    

}