#include <iostream>
using namespace std;

int main()
{
    int arr[6];
    for (int j = 0; j < 6; j++)
    {
        cin >> arr[j];
    }
    
    int n=0;
    int k=1;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] == arr[i+k] && arr[i] == 1)
        {
            n++;
        }
        
    }
    cout << n;
    return 0;
}